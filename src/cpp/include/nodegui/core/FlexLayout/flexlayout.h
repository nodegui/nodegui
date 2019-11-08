#pragma once

#include <QLayout>

#include "deps/yoga/YGNode.h"

/*
    FlexLayout is a custom Layout built for QT. This layout will be used to
layout qt widgets using facebook's yoga library. Thus giving ability to layout
Qt Widgets using Flexbox. Usage: QWidget *container = new QWidget(); YGNodeRef
root = YGNodeNew(); YGNodeRef child1 = YGNodeNew(); YGNodeRef child2 =
YGNodeNew(); FlexLayout * flayout = new FlexLayout(container,root);
// or  FlexLayout * flayout = new FlexLayout(container);
// or  FlexLayout *flayout = new FlexLayout();

    flayout->addWidget(btn1, child1);
    flayout->addWidget(btn2, child2);
 */

class FlexLayout : public QLayout {
 private:
  YGNodeRef node;
  YGNodeRef getRootNode(YGNodeRef node);

 public:
  struct NodeContext {
    NodeContext(QLayoutItem *i) { item = i; }
    QLayoutItem *item;
  };
  FlexLayout(QWidget *parentWidget = nullptr, YGNodeRef parentNode = nullptr);
  ~FlexLayout() override;
  QSize sizeHint() const override;
  void addItem(QLayoutItem *) override;
  QLayoutItem *itemAt(int index) const override;
  QLayoutItem *takeAt(int index) override;
  int count() const override;
  void addWidget(QWidget *childWidget, YGNodeRef childNode);
  void insertChildBefore(QWidget *childWidget, YGNodeRef beforeChildNode,
                         YGNodeRef childNode);
  void removeWidget(QWidget *childWidget, YGNodeRef childNode);
  void setGeometry(const QRect &rect) override;
  void setFlexNode(YGNodeRef parentNode);
  static NodeContext *getNodeContext(YGNodeRef node);
};
