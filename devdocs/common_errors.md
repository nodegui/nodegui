# Common errors

1. **Segmentation fault:** Segmentation fault occurs when you access a Pointer that is pointing to an invalid memory address. One major reason for this can be that JS garbage collector would have garbage collected the addon generated value and you try accessing it after a while. This is mostly the case if you see seg fault happening randomly after some time of startup.

2. **Widget not visible in Flex layout** Widget might have gotten zero height/width. This can occur if yoga was not able to get the default height/width of the widget. Make sure you have implemented  
   `YGNodeSetMeasureFunc(this->instance->getFlexNode(), &extrautils::measureQtWidget);`
   if its a leaf node widget(doesnt contain any children).
