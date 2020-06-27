---
id: "userinputresolutionoption"
title: "UserInputResolutionOption"
sidebar_label: "UserInputResolutionOption"
---

## Index

### Enumeration members

* [AssumeLocalFile](userinputresolutionoption.md#assumelocalfile)
* [DefaultResolution](userinputresolutionoption.md#defaultresolution)

## Enumeration members

###  AssumeLocalFile

• **AssumeLocalFile**: = 1

This option makes fromUserInput() always return a local path unless the input contains a scheme, such as http://file.pl. This is useful for applications such as text editors, which are able to create the file if it doesn't exist.

___

###  DefaultResolution

• **DefaultResolution**: = 0

The default resolution mechanism is to check whether a local file exists, in the working directory given to fromUserInput, and only return a local path in that case. Otherwise a URL is assumed.
