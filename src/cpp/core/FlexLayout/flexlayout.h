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
    FlexLayout(QWidget* parentWidget, YGNodeRef parentNode);
    ~FlexLayout() override;
    QSize sizeHint() const override;
    void addItem(QLayoutItem *) override;
    QLayoutItem *itemAt(int index) const override;
    QLayoutItem *takeAt(int index) override;
    int count() const override;
    void addWidget(QWidget* childWidget, YGNodeRef childNode);
    void setGeometry(const QRect &rect) override;
};

#endif // FLEXLAYOUT_H
