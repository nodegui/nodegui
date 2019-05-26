#include "flexlayout.h"
#include <QDebug>
#include <QPushButton>

FlexLayout::NodeContext *FlexLayout::getNodeContext(YGNodeRef node) const
{
    void* childContext = YGNodeGetContext(node);
    NodeContext *ctx = reinterpret_cast<NodeContext*>(childContext);
    return ctx;
}

FlexLayout::FlexLayout(QWidget *parentWidget, YGNodeRef parentNode): QLayout(parentWidget)
{
    this->node = parentNode;
}

FlexLayout::~FlexLayout()
{
    const uint32_t childCount = YGNodeGetChildCount(this->node);
    for (uint32_t i = 0; i < childCount; i++) {
        const YGNodeRef oldChild = YGNodeGetChild(this->node, i);
        NodeContext* ctx = getNodeContext(oldChild);
        delete ctx->item;
    }
    YGNodeRemoveAllChildren(this->node);
}

QSize FlexLayout::sizeHint() const{
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
    YGNodeRef childNode = YGNodeGetChild(this->node, static_cast<uint>(index));
    NodeContext *ctx = getNodeContext(childNode);
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
    return static_cast<int>(YGNodeGetChildCount(this->node));

}

void FlexLayout::addWidget(QWidget* childWidget, YGNodeRef childNode)
{
    uint count =  YGNodeGetChildCount(this->node);
    YGNodeInsertChild(this->node,childNode, count);
    QLayoutItem* layoutItem = new QWidgetItem(childWidget);
    NodeContext* childContext = new NodeContext(layoutItem);
    YGNodeSetContext(childNode, static_cast<void *>(childContext));
}

void FlexLayout::setGeometry(const QRect &rect)
{

    int availableWidth = rect.width();
    int availableHeight = rect.height();
    YGDirection direction = YGDirection::YGDirectionLTR; //TODO

    YGNodeCalculateLayout(this->node,availableWidth,availableHeight,direction);

    uint count = YGNodeGetChildCount(this->node);

    for (uint i = 0; i < count; ++i) {
        YGNode *childNode = YGNodeGetChild(this->node, i);
        int width = static_cast<int>(YGNodeLayoutGetWidth(childNode));
        int height = static_cast<int>(YGNodeLayoutGetHeight(childNode));
        int left = static_cast<int>(YGNodeLayoutGetLeft(childNode));
        int top = static_cast<int>(YGNodeLayoutGetTop(childNode));

        QRect childRect(left, top,width, height);
        NodeContext *ctx =  getNodeContext(childNode);
        QLayoutItem* childLayoutItem = ctx->item;
        QWidget* childWidget = childLayoutItem->widget();

        if(childWidget){
            childWidget->setGeometry(childRect);
        }else {
           childLayoutItem->setGeometry(childRect);
        }
    }
      QLayout::setGeometry(rect);
}

