# Common errors

1. Segmentation fault: Segmentation fault occurs when you access a Pointer that is pointing to an invalid memory address. One major reason for this can be that JS garbage collector would have garbage collected the addon generated value and you try accessing it after a while. This is mostly the case if you see seg fault happening randomly after some time of startup.
