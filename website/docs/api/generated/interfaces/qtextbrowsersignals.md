---
id: "qtextbrowsersignals"
title: "QTextBrowserSignals"
sidebar_label: "QTextBrowserSignals"
---

## Hierarchy

  ↳ [QTextEditSignals](qtexteditsignals.md)

  ↳ **QTextBrowserSignals**

## Index

### Properties

* [anchorClicked](qtextbrowsersignals.md#anchorclicked)
* [backwardAvailable](qtextbrowsersignals.md#backwardavailable)
* [copyAvailable](qtextbrowsersignals.md#copyavailable)
* [cursorPositionChanged](qtextbrowsersignals.md#cursorpositionchanged)
* [customContextMenuRequested](qtextbrowsersignals.md#customcontextmenurequested)
* [forwardAvailable](qtextbrowsersignals.md#forwardavailable)
* [highlighted](qtextbrowsersignals.md#highlighted)
* [historyChanged](qtextbrowsersignals.md#historychanged)
* [objectNameChanged](qtextbrowsersignals.md#objectnamechanged)
* [redoAvailable](qtextbrowsersignals.md#redoavailable)
* [selectionChanged](qtextbrowsersignals.md#selectionchanged)
* [sourceChanged](qtextbrowsersignals.md#sourcechanged)
* [textChanged](qtextbrowsersignals.md#textchanged)
* [undoAvailable](qtextbrowsersignals.md#undoavailable)
* [windowIconChanged](qtextbrowsersignals.md#windowiconchanged)
* [windowTitleChanged](qtextbrowsersignals.md#windowtitlechanged)

## Properties

###  anchorClicked

• **anchorClicked**: *function*

#### Type declaration:

▸ (`link`: [QUrl](../classes/qurl.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`link` | [QUrl](../classes/qurl.md) |

___

###  backwardAvailable

• **backwardAvailable**: *function*

#### Type declaration:

▸ (`available`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`available` | boolean |

___

###  copyAvailable

• **copyAvailable**: *function*

*Inherited from [QTextEditSignals](qtexteditsignals.md).[copyAvailable](qtexteditsignals.md#copyavailable)*

#### Type declaration:

▸ (`yes`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`yes` | boolean |

___

###  cursorPositionChanged

• **cursorPositionChanged**: *function*

*Inherited from [QTextEditSignals](qtexteditsignals.md).[cursorPositionChanged](qtexteditsignals.md#cursorpositionchanged)*

#### Type declaration:

▸ (): *void*

___

###  customContextMenuRequested

• **customContextMenuRequested**: *function*

*Inherited from [QWidgetSignals](qwidgetsignals.md).[customContextMenuRequested](qwidgetsignals.md#customcontextmenurequested)*

#### Type declaration:

▸ (`pos`: object): *void*

**Parameters:**

▪ **pos**: *object*

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

___

###  forwardAvailable

• **forwardAvailable**: *function*

#### Type declaration:

▸ (`available`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`available` | boolean |

___

###  highlighted

• **highlighted**: *function*

#### Type declaration:

▸ (`link`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`link` | string |

___

###  historyChanged

• **historyChanged**: *function*

#### Type declaration:

▸ (): *void*

___

###  objectNameChanged

• **objectNameChanged**: *function*

*Inherited from [QObjectSignals](qobjectsignals.md).[objectNameChanged](qobjectsignals.md#objectnamechanged)*

#### Type declaration:

▸ (`objectName`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

___

###  redoAvailable

• **redoAvailable**: *function*

*Inherited from [QTextEditSignals](qtexteditsignals.md).[redoAvailable](qtexteditsignals.md#redoavailable)*

#### Type declaration:

▸ (`available`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`available` | boolean |

___

###  selectionChanged

• **selectionChanged**: *function*

*Inherited from [QTextEditSignals](qtexteditsignals.md).[selectionChanged](qtexteditsignals.md#selectionchanged)*

#### Type declaration:

▸ (): *void*

___

###  sourceChanged

• **sourceChanged**: *function*

#### Type declaration:

▸ (`src`: [QUrl](../classes/qurl.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`src` | [QUrl](../classes/qurl.md) |

___

###  textChanged

• **textChanged**: *function*

*Inherited from [QTextEditSignals](qtexteditsignals.md).[textChanged](qtexteditsignals.md#textchanged)*

#### Type declaration:

▸ (): *void*

___

###  undoAvailable

• **undoAvailable**: *function*

*Inherited from [QTextEditSignals](qtexteditsignals.md).[undoAvailable](qtexteditsignals.md#undoavailable)*

#### Type declaration:

▸ (`available`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`available` | boolean |

___

###  windowIconChanged

• **windowIconChanged**: *function*

*Inherited from [QWidgetSignals](qwidgetsignals.md).[windowIconChanged](qwidgetsignals.md#windowiconchanged)*

#### Type declaration:

▸ (`iconNative`: [NativeElement](../globals.md#nativeelement)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`iconNative` | [NativeElement](../globals.md#nativeelement) |

___

###  windowTitleChanged

• **windowTitleChanged**: *function*

*Inherited from [QWidgetSignals](qwidgetsignals.md).[windowTitleChanged](qwidgetsignals.md#windowtitlechanged)*

#### Type declaration:

▸ (`title`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`title` | string |
