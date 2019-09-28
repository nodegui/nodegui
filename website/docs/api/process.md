---
sidebar_label: process
title: process
---

> Extensions to process object.

Qode's `process` object is extended from the
[Node.js `process` object](https://nodejs.org/api/process.html).
It adds the following properties :

## Properties

### `process.versions.qode` _Readonly_

A `String` representing Qode's version string. Qode is a lightly modified version of NodeJs that allows running Qt and NodeJs under a single process.

### `process.versions.qt(compiled)` _Readonly_

A `String` representing Qt version used when compile Qode binary. This can be useful to know which version of Qt is binary compatible with the version of Qode you are running. This is useful when running qode with a different version of Qt than what it was compiled with.

### `process.versions.qt(runtime)` _Readonly_

A `String` representing Qt version of the Qt library loaded during runtime. This can be useful to know which version of Qt you are using at runtime as compared to the version of Qt used when Qode was compiled.This is possible since Qt is dynamically linked to Qode and you could replace the Qt dynamic libraries with any binary compatible library. Hence, this is useful when running qode with a different version of Qt than what it was compiled with.
