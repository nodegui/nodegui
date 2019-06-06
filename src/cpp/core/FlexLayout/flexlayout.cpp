#include "flexlayout.h"
#include <QDebug>
#include <QWidget>

FlexLayout::NodeContext *FlexLayout::getNodeContext(YGNodeRef node) const
{
    if(!node){
        return nullptr;
    }
    void* childContext = YGNodeGetContext(node);
    NodeContext *ctx = static_cast<NodeContext*>(childContext); //because we are managing this at all times
    return ctx;
}

FlexLayout::FlexLayout(QWidget *parentWidget, YGNodeRef parentNode): QLayout(parentWidget)
{
    this->node = parentNode;
}

FlexLayout::~FlexLayout()
{
    if(!this->node){
        return;
    }
    const uint32_t childCount = YGNodeGetChildCount(this->node);
    for (uint32_t i = 0; i < childCount; i++) {
        const YGNodeRef oldChild = YGNodeGetChild(this->node, i);
        NodeContext* ctx = getNodeContext(oldChild);
        if(ctx){
            delete ctx->item;
        }
    }
    YGNodeRemoveAllChildren(this->node);
}

QSize FlexLayout::sizeHint() const{
    if(!this->node){
        return QSize(0,0);
    }
    QSize size;
    int width = static_cast<int>(YGNodeLayoutGetWidth(this->node));
    int height = static_cast<int>(YGNodeLayoutGetHeight(this->node));
    size.setWidth(width);
    size.setHeight(height);
    return size;
}

void FlexLayout::addItem(QLayoutItem * item){
    qDebug() <<"Unsupported method addItem. item:"<<item<<". Use FlexLayout::addWidget instead";
}

QLayoutItem *FlexLayout::itemAt(int index) const
{
    if(!this->node){
        return nullptr;
    }
    YGNodeRef childNode = YGNodeGetChild(this->node, static_cast<uint>(index));
    NodeContext *ctx = getNodeContext(childNode);
    if(!ctx){
        return nullptr;
    }
    return ctx->item;
}

QLayoutItem *FlexLayout::takeAt(int index)
{
    YGNodeRef childNode = YGNodeGetChild(this->node, static_cast<uint>(index));
    NodeContext *ctx = getNodeContext(childNode);
    QLayoutItem* childLayoutItem = ctx->item;
    YGNodeRemoveChild(this->node, childNode);
    delete ctx;
    return childLayoutItem;
}

int FlexLayout::count() const
{
    if(!this->node){
        return 0;
    }
    float childCount = YGNodeGetChildCount(this->node);
    return static_cast<int>(childCount);

}

void FlexLayout::addWidget(QWidget* childWidget, YGNodeRef childNode)
{
    if(!this->node){
        qDebug()<<"Flex layout's parent yoga node not set yet. Set it using setFlexNode. Child widget will not be added to Flex Layout";
        return;
    }
    uint count =  YGNodeGetChildCount(this->node);
    YGNodeInsertChild(this->node,childNode, count);
    QLayoutItem* layoutItem = new QWidgetItem(childWidget);
    NodeContext* childContext = new NodeContext(layoutItem);
    YGNodeSetContext(childNode, static_cast<void *>(childContext));
}

void FlexLayout::setGeometry(const QRect &rect)
{
    if(!this->node){
        return;
    }
    int availableWidth = rect.width();
    int availableHeight = rect.height();
    YGDirection direction = YGNodeStyleGetDirection(this->node);
    YGNodeCalculateLayout(this->node,availableWidth,availableHeight,direction);

    uint count = YGNodeGetChildCount(this->node);

    for (uint i = 0; i < count; ++i) {
        YGNode *childNode = YGNodeGetChild(this->node, i);
        int width = static_cast<int>(YGNodeLayoutGetWidth(childNode));
        int height = static_cast<int>(YGNodeLayoutGetHeight(childNode));
        int left = static_cast<int>(YGNodeLayoutGetLeft(childNode));
        int top = static_cast<int>(YGNodeLayoutGetTop(childNode));

        QRect childRect(left, top,width, height);
        NodeContext *ctx = getNodeContext(childNode);
        if(ctx){
            QLayoutItem* childLayoutItem = ctx->item;
            QWidget* childWidget = childLayoutItem->widget();
            if(childWidget){
                childWidget->setGeometry(childRect);
            }else {
                childLayoutItem->setGeometry(childRect);
            }
        }
    }
    QLayout::setGeometry(rect);
}

void FlexLayout::setFlexNode(YGNodeRef parentNode)
{
    this->node = parentNode;
}

