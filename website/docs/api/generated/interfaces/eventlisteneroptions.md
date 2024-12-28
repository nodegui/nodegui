---
id: "eventlisteneroptions"
title: "EventListenerOptions"
sidebar_label: "EventListenerOptions"
---

## Hierarchy

* **EventListenerOptions**

## Index

### Properties

* [afterDefault](eventlisteneroptions.md#optional-afterdefault)

## Properties

### `Optional` afterDefault

• **afterDefault**? : *boolean*

This applies only when listening to QEvents. If set to true, then the callback will
be called after the default processing by the base widget has occurred. By default
callbacks for QEvents are called before the base widget `::event()` is called.
