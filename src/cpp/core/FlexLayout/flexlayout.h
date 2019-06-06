#ifndef FLEXLAYOUT_H
#define FLEXLAYOUT_H

#include "deps/yoga/YGNode.h"
#include <QLayout>

class FlexLayout: public QLayout
{
private:
    YGNodeRef node;
    struct NodeContext
    {
        NodeContext(QLayoutItem *i) {
            item = i;
        }
        QLayoutItem *item;
    };
    NodeContext* getNodeContext(YGNodeRef node) const;

public:
    FlexLayout(QWidget* parentWidget=nullptr, YGNodeRef parentNode=nullptr);
    ~FlexLayout() override;
    QSize sizeHint() const override;
    void addItem(QLayoutItem *) override;
    QLayoutItem *itemAt(int index) const override;
    QLayoutItem *takeAt(int index) override;
    int count() const override;
    void addWidget(QWidget* childWidget, YGNodeRef childNode);
    void setGeometry(const QRect &rect) override;
    void setFlexNode(YGNodeRef parentNode);
};

#endif // FLEXLAYOUT_H
