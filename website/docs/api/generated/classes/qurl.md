---
id: "qurl"
title: "QUrl"
sidebar_label: "QUrl"
---

## Hierarchy

* [Component](component.md)

  ↳ **QUrl**

## Index

### Constructors

* [constructor](qurl.md#constructor)

### Properties

* [native](qurl.md#native)

### Methods

* [adjusted](qurl.md#adjusted)
* [authority](qurl.md#authority)
* [clear](qurl.md#clear)
* [errorString](qurl.md#errorstring)
* [fileName](qurl.md#filename)
* [fragment](qurl.md#fragment)
* [hasFragment](qurl.md#hasfragment)
* [hasQuery](qurl.md#hasquery)
* [host](qurl.md#host)
* [isEmpty](qurl.md#isempty)
* [isLocalFile](qurl.md#islocalfile)
* [isParentOf](qurl.md#isparentof)
* [isRelative](qurl.md#isrelative)
* [isValid](qurl.md#isvalid)
* [matches](qurl.md#matches)
* [password](qurl.md#password)
* [path](qurl.md#path)
* [port](qurl.md#port)
* [query](qurl.md#query)
* [resolved](qurl.md#resolved)
* [scheme](qurl.md#scheme)
* [setAuthority](qurl.md#setauthority)
* [setFragment](qurl.md#setfragment)
* [setHost](qurl.md#sethost)
* [setPassword](qurl.md#setpassword)
* [setPath](qurl.md#setpath)
* [setPort](qurl.md#setport)
* [setQuery](qurl.md#setquery)
* [setScheme](qurl.md#setscheme)
* [setUrl](qurl.md#seturl)
* [setUserInfo](qurl.md#setuserinfo)
* [setUserName](qurl.md#setusername)
* [swap](qurl.md#swap)
* [toDisplayString](qurl.md#todisplaystring)
* [toLocalFile](qurl.md#tolocalfile)
* [toString](qurl.md#tostring)
* [url](qurl.md#url)
* [userInfo](qurl.md#userinfo)
* [userName](qurl.md#username)
* [fromLocalFile](qurl.md#static-fromlocalfile)
* [fromQVariant](qurl.md#static-fromqvariant)
* [fromUserInput](qurl.md#static-fromuserinput)

## Constructors

###  constructor

\+ **new QUrl**(): *[QUrl](qurl.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Returns:** *[QUrl](qurl.md)*

\+ **new QUrl**(`nativeElement`: [NativeElement](../globals.md#nativeelement)): *[QUrl](qurl.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`nativeElement` | [NativeElement](../globals.md#nativeelement) |

**Returns:** *[QUrl](qurl.md)*

\+ **new QUrl**(`url`: string, `parsingMode?`: [ParsingMode](../enums/parsingmode.md)): *[QUrl](qurl.md)*

*Overrides [Component](component.md).[constructor](component.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`url` | string |
`parsingMode?` | [ParsingMode](../enums/parsingmode.md) |

**Returns:** *[QUrl](qurl.md)*

## Properties

###  native

• **native**: *[NativeElement](../globals.md#nativeelement) | null*

*Inherited from [Component](component.md).[native](component.md#native)*

## Methods

###  adjusted

▸ **adjusted**(`options`: number): *[QUrl](qurl.md)*

Returns an adjusted version of the URL. The output can be customized by passing flags with options.

**Parameters:**

Name | Type |
------ | ------ |
`options` | number |

**Returns:** *[QUrl](qurl.md)*

___

###  authority

▸ **authority**(`options`: number): *string*

Returns the authority of the URL if it is defined; otherwise an empty string is returned.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.PrettyDecoded |

**Returns:** *string*

___

###  clear

▸ **clear**(): *void*

Resets the content of the QUrl. After calling this function, the QUrl is equal to one that has been constructed with the default empty constructor.

**Returns:** *void*

___

###  errorString

▸ **errorString**(): *string*

Returns an error message if the last operation that modified this QUrl object ran into a parsing error. If no error was detected, this function returns an empty string and isValid() returns true.

**Returns:** *string*

___

###  fileName

▸ **fileName**(`options`: number): *string*

Returns the name of the file, excluding the directory path.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.FullyDecoded |

**Returns:** *string*

___

###  fragment

▸ **fragment**(`options`: number): *string*

Returns the fragment of the URL. To determine if the parsed URL contained a fragment, use hasFragment().

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.PrettyDecoded |

**Returns:** *string*

___

###  hasFragment

▸ **hasFragment**(): *boolean*

Returns true if this URL contains a fragment (i.e., if # was seen on it).

**Returns:** *boolean*

___

###  hasQuery

▸ **hasQuery**(): *boolean*

Returns true if this URL contains a Query (i.e., if ? was seen on it).

**Returns:** *boolean*

___

###  host

▸ **host**(`options`: number): *string*

Returns the host of the URL if it is defined; otherwise an empty string is returned.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.FullyDecoded |

**Returns:** *string*

___

###  isEmpty

▸ **isEmpty**(): *boolean*

Returns true if the URL has no data; otherwise returns false.

**Returns:** *boolean*

___

###  isLocalFile

▸ **isLocalFile**(): *boolean*

Returns true if this URL is pointing to a local file path. A URL is a local file path if the scheme is "file".

**Returns:** *boolean*

___

###  isParentOf

▸ **isParentOf**(`childUrl`: [QUrl](qurl.md)): *boolean*

Returns true if this URL is a parent of childUrl. childUrl is a child of this URL if the two URLs share the same scheme and authority, and this URL's path is a parent of the path of childUrl.

**Parameters:**

Name | Type |
------ | ------ |
`childUrl` | [QUrl](qurl.md) |

**Returns:** *boolean*

___

###  isRelative

▸ **isRelative**(): *boolean*

Returns true if the URL is relative; otherwise returns false. A URL is relative reference if its scheme is undefined; this function is therefore equivalent to calling scheme().isEmpty().

**Returns:** *boolean*

___

###  isValid

▸ **isValid**(): *boolean*

Returns true if the URL is non-empty and valid; otherwise returns false.

**Returns:** *boolean*

___

###  matches

▸ **matches**(`url`: [QUrl](qurl.md), `options`: number): *boolean*

Returns true if this URL and the given url are equal after applying options to both; otherwise returns false.

**Parameters:**

Name | Type |
------ | ------ |
`url` | [QUrl](qurl.md) |
`options` | number |

**Returns:** *boolean*

___

###  password

▸ **password**(`options`: number): *string*

Returns the password of the URL if it is defined; otherwise an empty string is returned.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.FullyDecoded |

**Returns:** *string*

___

###  path

▸ **path**(`options`: number): *string*

Returns the path of the URL.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.FullyDecoded |

**Returns:** *string*

___

###  port

▸ **port**(`defaultPort`: number): *number*

Returns the port of the URL, or defaultPort if the port is unspecified.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`defaultPort` | number | -1 |

**Returns:** *number*

___

###  query

▸ **query**(`options`: number): *string*

Returns the query string of the URL if there's a query string, or an empty result if not. To determine if the parsed URL contained a query string, use hasQuery().

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.PrettyDecoded |

**Returns:** *string*

___

###  resolved

▸ **resolved**(`relative`: [QUrl](qurl.md)): *[QUrl](qurl.md)*

Returns the result of the merge of this URL with relative. This URL is used as a base to convert relative to an absolute URL.

**Parameters:**

Name | Type |
------ | ------ |
`relative` | [QUrl](qurl.md) |

**Returns:** *[QUrl](qurl.md)*

___

###  scheme

▸ **scheme**(): *string*

Returns the scheme of the URL. If an empty string is returned, this means the scheme is undefined and the URL is then relative.

**Returns:** *string*

___

###  setAuthority

▸ **setAuthority**(`authority`: string, `mode`: [ParsingMode](../enums/parsingmode.md)): *void*

Sets the authority of the URL to authority.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`authority` | string | - |
`mode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.TolerantMode |

**Returns:** *void*

___

###  setFragment

▸ **setFragment**(`fragment`: string, `mode`: [ParsingMode](../enums/parsingmode.md)): *void*

Sets the fragment of the URL to fragment. The fragment is the last part of the URL, represented by a '#' followed by a string of characters. It is typically used in HTTP for referring to a certain link or point on a page:

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`fragment` | string | - |
`mode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.TolerantMode |

**Returns:** *void*

___

###  setHost

▸ **setHost**(`host`: string, `mode`: [ParsingMode](../enums/parsingmode.md)): *void*

Sets the host of the URL to host. The host is part of the authority.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`host` | string | - |
`mode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.DecodedMode |

**Returns:** *void*

___

###  setPassword

▸ **setPassword**(`password`: string, `mode`: [ParsingMode](../enums/parsingmode.md)): *void*

Sets the URL's password to password. The password is part of the user info element in the authority of the URL, as described in setUserInfo().

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`password` | string | - |
`mode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.DecodedMode |

**Returns:** *void*

___

###  setPath

▸ **setPath**(`path`: string, `mode`: [ParsingMode](../enums/parsingmode.md)): *void*

Sets the path of the URL to path. The path is the part of the URL that comes after the authority but before the query string.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`path` | string | - |
`mode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.DecodedMode |

**Returns:** *void*

___

###  setPort

▸ **setPort**(`port`: number): *void*

Sets the port of the URL to port. The port is part of the authority of the URL, as described in setAuthority().

**Parameters:**

Name | Type |
------ | ------ |
`port` | number |

**Returns:** *void*

___

###  setQuery

▸ **setQuery**(`query`: string, `mode`: [ParsingMode](../enums/parsingmode.md)): *void*

Sets the query string of the URL to query.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`query` | string | - |
`mode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.TolerantMode |

**Returns:** *void*

___

###  setScheme

▸ **setScheme**(`scheme`: string): *void*

Sets the scheme of the URL to scheme. As a scheme can only contain ASCII characters, no conversion or decoding is done on the input. It must also start with an ASCII letter.

**Parameters:**

Name | Type |
------ | ------ |
`scheme` | string |

**Returns:** *void*

___

###  setUrl

▸ **setUrl**(`url`: string, `parsingMode`: [ParsingMode](../enums/parsingmode.md)): *void*

Parses url and sets this object to that value. QUrl will automatically percent encode all characters that are not allowed in a URL and decode the percent-encoded sequences that represent an unreserved character (letters, digits, hyphens, undercores, dots and tildes). All other characters are left in their original forms.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`url` | string | - |
`parsingMode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.TolerantMode |

**Returns:** *void*

___

###  setUserInfo

▸ **setUserInfo**(`userInfo`: string, `mode`: [ParsingMode](../enums/parsingmode.md)): *void*

Sets the user info of the URL to userInfo. The user info is an optional part of the authority of the URL, as described in setAuthority().

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`userInfo` | string | - |
`mode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.TolerantMode |

**Returns:** *void*

___

###  setUserName

▸ **setUserName**(`userName`: string, `mode`: [ParsingMode](../enums/parsingmode.md)): *void*

Sets the URL's user name to userName. The userName is part of the user info element in the authority of the URL, as described in setUserInfo().

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`userName` | string | - |
`mode` | [ParsingMode](../enums/parsingmode.md) | ParsingMode.DecodedMode |

**Returns:** *void*

___

###  swap

▸ **swap**(`other`: [QUrl](qurl.md)): *void*

Swaps URL other with this URL. This operation is very fast and never fails.

**Parameters:**

Name | Type |
------ | ------ |
`other` | [QUrl](qurl.md) |

**Returns:** *void*

___

###  toDisplayString

▸ **toDisplayString**(`options`: number): *string*

Returns a human-displayable string representation of the URL. The output can be customized by passing flags with options. The option RemovePassword is always enabled, since passwords should never be shown back to users.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.PrettyDecoded |

**Returns:** *string*

___

###  toLocalFile

▸ **toLocalFile**(): *string*

Returns the path of this URL formatted as a local file path. The path returned will use forward slashes, even if it was originally created from one with backslashes.

**Returns:** *string*

___

###  toString

▸ **toString**(`options?`: number): *string*

Returns a string representation of the URL. The output can be customized by passing flags with options. The option QUrl::FullyDecoded is not permitted in this function since it would generate ambiguous data.

See QUrl::ComponentFormattingOption for flags

**Parameters:**

Name | Type |
------ | ------ |
`options?` | number |

**Returns:** *string*

___

###  url

▸ **url**(`options`: number): *string*

Returns a string representation of the URL. The output can be customized by passing flags with options. The option QUrl::FullyDecoded is not permitted in this function since it would generate ambiguous data.

**Parameters:**

Name | Type |
------ | ------ |
`options` | number |

**Returns:** *string*

___

###  userInfo

▸ **userInfo**(`options`: number): *string*

Returns the user info of the URL, or an empty string if the user info is undefined.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.PrettyDecoded |

**Returns:** *string*

___

###  userName

▸ **userName**(`options`: number): *string*

Returns the user name of the URL if it is defined; otherwise an empty string is returned.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`options` | number | ComponentFormattingOption.FullyDecoded |

**Returns:** *string*

___

### `Static` fromLocalFile

▸ **fromLocalFile**(`localFile`: string): *[QUrl](qurl.md)*

Returns a QUrl representation of localFile, interpreted as a local file. This function accepts paths separated by slashes as well as the native separator for this platform.

**Parameters:**

Name | Type |
------ | ------ |
`localFile` | string |

**Returns:** *[QUrl](qurl.md)*

___

### `Static` fromQVariant

▸ **fromQVariant**(`variant`: [QVariant](qvariant.md)): *[QUrl](qurl.md)*

**Parameters:**

Name | Type |
------ | ------ |
`variant` | [QVariant](qvariant.md) |

**Returns:** *[QUrl](qurl.md)*

___

### `Static` fromUserInput

▸ **fromUserInput**(`userInput`: string, `workingDirectory?`: string, `options`: number): *[QUrl](qurl.md)*

Returns a valid URL from a user supplied userInput string if one can be deduced. In the case that is not possible, an invalid QUrl() is returned.

**Parameters:**

Name | Type | Default |
------ | ------ | ------ |
`userInput` | string | - |
`workingDirectory?` | string | - |
`options` | number | UserInputResolutionOption.DefaultResolution |

**Returns:** *[QUrl](qurl.md)*
