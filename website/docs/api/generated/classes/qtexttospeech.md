---
id: "qtexttospeech"
title: "QTextToSpeech"
sidebar_label: "QTextToSpeech"
---

> QTextToSpeech is a class that provides a convenient access to text-to-speech engines..

**This class is a JS wrapper around Qt's [QDesktopWidget Class](https://doc.qt.io/qt-5/qtexttospeech.html)**

Use say() to start synthesizing text. To select between the available voices use setVoice(). The languages and voices depend on the available synthesizers on each platform. On Linux, speech-dispatcher is used by default.

### Example

```js
const tts = new QTextToSpeech();

console.log('Engines', QTextToSpeech.availableEngines());

console.log(tts.availableVoices());

tts.addEventListener('pitchChanged', (n) => {
console.log('(EVENT) Pitch After ' + n);
});

tts.addEventListener('rateChanged', (n) => {
console.log('(EVENT) Rate After ' + n);
});

tts.addEventListener('stateChanged', (n: State) => {
const stringState = n === State.Speaking ? 'Speaking' : n === State.Paused ? 'Paused' : 'Read';
console.log('(EVENT) TTS state is ' + stringState);
});

console.log('Pitch Before setting ', tts.pitch());
tts.setPitch(5);
console.log('Pitch After setting ', tts.pitch());

console.log('Rate Before setting ', tts.rate());
tts.setRate(2);
console.log('Rate After setting ', tts.rate());

console.log('Volume Before setting ', tts.volume());
tts.setVolume(0.9);
console.log('Volume After setting ', tts.volume());

console.log(tts.state());

setTimeout(() => {
setTimeout(() => {
tts.pause();
setTimeout(() => {
tts.resume();
setTimeout(() => {
tts.stop();
}, 4000);
}, 2000);
}, 1000);
tts.say(
"Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum",
);
}, 5000);
```

## Hierarchy

  ↳ [NodeObject](nodeobject.md)‹[QTextToSpeechSignals](../interfaces/qtexttospeechsignals.md)›

  ↳ **QTextToSpeech**

## Index

### Constructors

* [constructor](qtexttospeech.md#constructor)

### Properties

* [native](qtexttospeech.md#native)
* [nodeChildren](qtexttospeech.md#nodechildren)
* [nodeParent](qtexttospeech.md#optional-nodeparent)

### Methods

* [addEventListener](qtexttospeech.md#addeventlistener)
* [availableVoices](qtexttospeech.md#availablevoices)
* [inherits](qtexttospeech.md#inherits)
* [objectName](qtexttospeech.md#objectname)
* [pause](qtexttospeech.md#pause)
* [pitch](qtexttospeech.md#pitch)
* [property](qtexttospeech.md#property)
* [rate](qtexttospeech.md#rate)
* [removeEventListener](qtexttospeech.md#removeeventlistener)
* [resume](qtexttospeech.md#resume)
* [say](qtexttospeech.md#say)
* [setNodeParent](qtexttospeech.md#setnodeparent)
* [setObjectName](qtexttospeech.md#setobjectname)
* [setPitch](qtexttospeech.md#setpitch)
* [setProperty](qtexttospeech.md#setproperty)
* [setRate](qtexttospeech.md#setrate)
* [setVoice](qtexttospeech.md#setvoice)
* [setVolume](qtexttospeech.md#setvolume)
* [state](qtexttospeech.md#state)
* [stop](qtexttospeech.md#stop)
* [volume](qtexttospeech.md#volume)
* [availableEngines](qtexttospeech.md#static-availableengines)

## Constructors

###  constructor

\+ **new QTextToSpeech**(): *[QTextToSpeech](qtexttospeech.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QTextToSpeech](qtexttospeech.md)*

\+ **new QTextToSpeech**(`native`: [NativeElement](../globals.md#nativeelement)): *[QTextToSpeech](qtexttospeech.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`native` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QTextToSpeech](qtexttospeech.md)*

\+ **new QTextToSpeech**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QTextToSpeech](qtexttospeech.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QTextToSpeech](qtexttospeech.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Overrides [Component](component.md).[native](component.md#abstract-native)*

___

###  nodeChildren

• **nodeChildren**: *Set‹[Component](component.md)›*

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

## Methods

###  addEventListener

▸ **addEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTextToSpeechSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTextToSpeechSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | QTextToSpeechSignals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

**Returns:** *void*

void

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener('clicked',(checked)=>console.log("clicked"));
// here clicked is a value from QPushButtonSignals interface
```

▸ **addEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener(WidgetEventTypes.HoverEnter,()=>console.log("hovered"));
```

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

###  availableVoices

▸ **availableVoices**(): *Array‹string›*

**Returns:** *Array‹string›*

___

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [NodeObject](nodeobject.md).[inherits](nodeobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [NodeObject](nodeobject.md).[objectName](nodeobject.md#objectname)*

**Returns:** *string*

___

###  pause

▸ **pause**(): *void*

**Returns:** *void*

___

###  pitch

▸ **pitch**(): *number*

**Returns:** *number*

___

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

*Inherited from [NodeObject](nodeobject.md).[property](nodeobject.md#property)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *[QVariant](qvariant.md)*

___

###  rate

▸ **rate**(): *number*

**Returns:** *number*

___

###  removeEventListener

▸ **removeEventListener**‹**SignalType**›(`signalType`: SignalType, `callback`: QTextToSpeechSignals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QTextToSpeechSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | QTextToSpeechSignals[SignalType] |

**Returns:** *void*

▸ **removeEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

###  resume

▸ **resume**(): *void*

**Returns:** *void*

___

###  say

▸ **say**(`textTarget`: string): *void*

**Parameters:**

Name | Type |
------ | ------ |
`textTarget` | string |

**Returns:** *void*

___

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

###  setObjectName

▸ **setObjectName**(`objectName`: string): *void*

*Inherited from [NodeObject](nodeobject.md).[setObjectName](nodeobject.md#setobjectname)*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

**Returns:** *void*

___

###  setPitch

▸ **setPitch**(`pitch`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`pitch` | number |

**Returns:** *void*

___

###  setProperty

▸ **setProperty**(`name`: string, `value`: [QVariantType](../globals.md#qvarianttype)): *boolean*

*Inherited from [NodeObject](nodeobject.md).[setProperty](nodeobject.md#setproperty)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *boolean*

___

###  setRate

▸ **setRate**(`rate`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`rate` | number |

**Returns:** *void*

___

###  setVoice

▸ **setVoice**(`index`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`index` | number |

**Returns:** *void*

___

###  setVolume

▸ **setVolume**(`volume`: number): *void*

**Parameters:**

Name | Type |
------ | ------ |
`volume` | number |

**Returns:** *void*

___

###  state

▸ **state**(): *[State](../enums/state.md)*

**Returns:** *[State](../enums/state.md)*

___

###  stop

▸ **stop**(): *void*

**Returns:** *void*

___

###  volume

▸ **volume**(): *number*

**Returns:** *number*

___

### `Static` availableEngines

▸ **availableEngines**(): *Array‹string›*

**Returns:** *Array‹string›*
