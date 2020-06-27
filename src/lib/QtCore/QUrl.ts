import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from './QVariant';

enum ComponentFormattingOption {
    /** The component is returned in a "pretty form", with most percent-encoded characters decoded. The exact behavior of PrettyDecoded varies from component to component and may also change from Qt release to Qt release. This is the default. */
    PrettyDecoded = 0x000000,
    /** Leave space characters in their encoded form ("%20"). */
    EncodeSpaces = 0x100000,
    /** Leave non-US-ASCII characters encoded in their UTF-8 percent-encoded form (e.g., "%C3%A9" for the U+00E9 codepoint, LATIN SMALL LETTER E WITH ACUTE). */
    EncodeUnicode = 0x200000,
    /** Leave certain delimiters in their encoded form, as would appear in the URL when the full URL is represented as text. The delimiters are affected by this option change from component to component. This flag has no effect in toString() or toEncoded().*/
    EncodeDelimiters = 0x400000 | 0x800000,
    /** Leave US-ASCII characters not permitted in the URL by the specification in their encoded form. This is the default on toString() and toEncoded(). */
    EncodeReserved = 0x1000000,
    /** Decode the US-ASCII characters that the URL specification does not allow to appear in the URL. This is the default on the getters of individual components. */
    DecodeReserved = 0x2000000,
    /** Leave all characters in their properly-encoded form, as this component would appear as part of a URL. When used with toString(), this produces a fully-compliant URL in QString form, exactly equal to the result of toEncoded() */
    FullyEncoded = EncodeSpaces | EncodeUnicode | EncodeDelimiters | EncodeReserved,
    /** Attempt to decode as much as possible. For individual components of the URL, this decodes every percent encoding sequence, including control characters (U+0000 to U+001F) and UTF-8 sequences found in percent-encoded form. Use of this mode may cause data loss, see below for more information. */
    FullyDecoded = FullyEncoded | DecodeReserved | 0x4000000,
}
export enum ParsingMode {
    /** QUrl will try to correct some common errors in URLs. This mode is useful for parsing URLs coming from sources not known to be strictly standards-conforming. */
    TolerantMode = 0,
    /** Only valid URLs are accepted. This mode is useful for general URL validation.*/
    StrictMode = 1,
    /** QUrl will interpret the URL component in the fully-decoded form, where percent characters stand for themselves, not as the beginning of a percent-encoded sequence. This mode is only valid for the setters setting components of a URL; it is not permitted in the QUrl constructor, in fromEncoded() or in setUrl(). For more information on this mode, see the documentation for QUrl::FullyDecoded.*/
    DecodedMode = 2,
}
enum UrlFormattingOption {
    None = 0x0,
    RemoveScheme = 0x1,
    RemovePassword = 0x2,
    RemoveUserInfo,
    RemovePort = 0x8,
    RemoveAuthority,
    RemovePath = 0x20,
    RemoveQuery = 0x40,
    RemoveFragment = 0x80,
    RemoveFilename = 0x800,
    PreferLocalFile = 0x200,
    StripTrailingSlash = 0x400,
    NormalizePathSegments = 0x1000,
}
enum UserInputResolutionOption {
    /** The default resolution mechanism is to check whether a local file exists, in the working directory given to fromUserInput, and only return a local path in that case. Otherwise a URL is assumed. */
    DefaultResolution = 0,
    /** This option makes fromUserInput() always return a local path unless the input contains a scheme, such as http://file.pl. This is useful for applications such as text editors, which are able to create the file if it doesn't exist. */
    AssumeLocalFile = 1,
}

export class QUrl extends Component {
    static readonly ComponentFormattingOption = ComponentFormattingOption;
    static readonly ParsingMode = ParsingMode;
    static readonly UrlFormattingOption = UrlFormattingOption;
    static readonly UserInputResolutionOption = UserInputResolutionOption;
    readonly ComponentFormattingOption = ComponentFormattingOption;
    readonly ParsingMode = ParsingMode;
    readonly UrlFormattingOption = UrlFormattingOption;
    readonly UserInputResolutionOption = UserInputResolutionOption;
    native: NativeElement;
    constructor();
    constructor(nativeElement: NativeElement);
    constructor(url: string, parsingMode?: ParsingMode);
    constructor(arg?: string | NativeElement, parsingMode: ParsingMode = ParsingMode.TolerantMode) {
        super();
        if (!arg) {
            this.native = new addon.QUrl();
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QUrl(arg, parsingMode);
        }
    }

    static fromQVariant(variant: QVariant): QUrl {
        return new QUrl(addon.QUrl.fromQVariant(variant.native));
    }

    /**
    Returns an adjusted version of the URL. The output can be customized by passing flags with options.
    */
    adjusted(options: number): QUrl {
        return new QUrl(this.native.adjusted(options));
    }

    /**
    Returns the authority of the URL if it is defined; otherwise an empty string is returned.
    */
    authority(options: number = ComponentFormattingOption.PrettyDecoded): string {
        return this.native.authority(options);
    }

    /**
    Resets the content of the QUrl. After calling this function, the QUrl is equal to one that has been constructed with the default empty constructor.
    */
    clear(): void {
        return this.native.clear();
    }

    /**
    Returns an error message if the last operation that modified this QUrl object ran into a parsing error. If no error was detected, this function returns an empty string and isValid() returns true.
    */
    errorString(): string {
        return this.native.errorString();
    }

    /**
    Returns the name of the file, excluding the directory path.
    */
    fileName(options: number = ComponentFormattingOption.FullyDecoded): string {
        return this.native.fileName(options);
    }

    /**
    Returns the fragment of the URL. To determine if the parsed URL contained a fragment, use hasFragment().
    */
    fragment(options: number = ComponentFormattingOption.PrettyDecoded): string {
        return this.native.fragment(options);
    }

    /**
    Returns true if this URL contains a fragment (i.e., if # was seen on it).
    */
    hasFragment(): boolean {
        return this.native.hasFragment();
    }

    /**
    Returns true if this URL contains a Query (i.e., if ? was seen on it).
    */
    hasQuery(): boolean {
        return this.native.hasQuery();
    }

    /**
    Returns the host of the URL if it is defined; otherwise an empty string is returned.
    */
    host(options: number = ComponentFormattingOption.FullyDecoded): string {
        return this.native.host(options);
    }

    /**
    Returns true if the URL has no data; otherwise returns false.
    */
    isEmpty(): boolean {
        return this.native.isEmpty();
    }

    /**
    Returns true if this URL is pointing to a local file path. A URL is a local file path if the scheme is "file".
    */
    isLocalFile(): boolean {
        return this.native.isLocalFile();
    }

    /**
    Returns true if this URL is a parent of childUrl. childUrl is a child of this URL if the two URLs share the same scheme and authority, and this URL's path is a parent of the path of childUrl.
    */
    isParentOf(childUrl: QUrl): boolean {
        return this.native.isParentOf(childUrl.native);
    }

    /**
    Returns true if the URL is relative; otherwise returns false. A URL is relative reference if its scheme is undefined; this function is therefore equivalent to calling scheme().isEmpty().
    */
    isRelative(): boolean {
        return this.native.isRelative();
    }

    /**
    Returns true if the URL is non-empty and valid; otherwise returns false.
    */
    isValid(): boolean {
        return this.native.isValid();
    }

    /**
    Returns true if this URL and the given url are equal after applying options to both; otherwise returns false.
    */
    matches(url: QUrl, options: number): boolean {
        return this.native.matches(url.native, options);
    }

    /**
    Returns the password of the URL if it is defined; otherwise an empty string is returned.
    */
    password(options: number = ComponentFormattingOption.FullyDecoded): string {
        return this.native.password(options);
    }

    /**
    Returns the path of the URL.
    */
    path(options: number = ComponentFormattingOption.FullyDecoded): string {
        return this.native.path(options);
    }

    /**
    Returns the port of the URL, or defaultPort if the port is unspecified.
    */
    port(defaultPort = -1): number {
        return this.native.port(defaultPort);
    }

    /**
    Returns the query string of the URL if there's a query string, or an empty result if not. To determine if the parsed URL contained a query string, use hasQuery().
    */
    query(options: number = ComponentFormattingOption.PrettyDecoded): string {
        return this.native.query(options);
    }

    /**
    Returns the result of the merge of this URL with relative. This URL is used as a base to convert relative to an absolute URL.
    */
    resolved(relative: QUrl): QUrl {
        return new QUrl(this.native.resolved(relative.native));
    }

    /**
    Returns the scheme of the URL. If an empty string is returned, this means the scheme is undefined and the URL is then relative.
    */
    scheme(): string {
        return this.native.scheme();
    }

    /**
    Sets the authority of the URL to authority.
    */
    setAuthority(authority: string, mode: ParsingMode = ParsingMode.TolerantMode): void {
        return this.native.setAuthority(authority, mode);
    }

    /**
    Sets the fragment of the URL to fragment. The fragment is the last part of the URL, represented by a '#' followed by a string of characters. It is typically used in HTTP for referring to a certain link or point on a page:
    */
    setFragment(fragment: string, mode: ParsingMode = ParsingMode.TolerantMode): void {
        return this.native.setFragment(fragment, mode);
    }

    /**
    Sets the host of the URL to host. The host is part of the authority.
    */
    setHost(host: string, mode: ParsingMode = ParsingMode.DecodedMode): void {
        return this.native.setHost(host, mode);
    }

    /**
    Sets the URL's password to password. The password is part of the user info element in the authority of the URL, as described in setUserInfo().
    */
    setPassword(password: string, mode: ParsingMode = ParsingMode.DecodedMode): void {
        return this.native.setPassword(password, mode);
    }

    /**
    Sets the path of the URL to path. The path is the part of the URL that comes after the authority but before the query string.
    */
    setPath(path: string, mode: ParsingMode = ParsingMode.DecodedMode): void {
        return this.native.setPath(path, mode);
    }

    /**
    Sets the port of the URL to port. The port is part of the authority of the URL, as described in setAuthority().
    */
    setPort(port: number): void {
        return this.native.setPort(port);
    }

    /**
    Sets the query string of the URL to query.
    */
    setQuery(query: string, mode: ParsingMode = ParsingMode.TolerantMode): void {
        return this.native.setQuery(query, mode);
    }

    /**
    Sets the scheme of the URL to scheme. As a scheme can only contain ASCII characters, no conversion or decoding is done on the input. It must also start with an ASCII letter.
    */
    setScheme(scheme: string): void {
        return this.native.setScheme(scheme);
    }

    /**
    Parses url and sets this object to that value. QUrl will automatically percent encode all characters that are not allowed in a URL and decode the percent-encoded sequences that represent an unreserved character (letters, digits, hyphens, undercores, dots and tildes). All other characters are left in their original forms.
    */
    setUrl(url: string, parsingMode: ParsingMode = ParsingMode.TolerantMode): void {
        return this.native.setUrl(url, parsingMode);
    }

    /**
    Sets the user info of the URL to userInfo. The user info is an optional part of the authority of the URL, as described in setAuthority().
    */
    setUserInfo(userInfo: string, mode: ParsingMode = ParsingMode.TolerantMode): void {
        return this.native.setUserInfo(userInfo, mode);
    }

    /**
    Sets the URL's user name to userName. The userName is part of the user info element in the authority of the URL, as described in setUserInfo().
    */
    setUserName(userName: string, mode: ParsingMode = ParsingMode.DecodedMode): void {
        return this.native.setUserName(userName, mode);
    }

    /**
    Swaps URL other with this URL. This operation is very fast and never fails.
    */
    swap(other: QUrl): void {
        return this.native.swap(other.native);
    }

    /**
    Returns a human-displayable string representation of the URL. The output can be customized by passing flags with options. The option RemovePassword is always enabled, since passwords should never be shown back to users.
    */
    toDisplayString(options: number = ComponentFormattingOption.PrettyDecoded): string {
        return this.native.toDisplayString(options);
    }

    /**
    Returns the path of this URL formatted as a local file path. The path returned will use forward slashes, even if it was originally created from one with backslashes.
    */
    toLocalFile(): string {
        return this.native.toLocalFile();
    }

    /**
    Returns a string representation of the URL. The output can be customized by passing flags with options. The option QUrl::FullyDecoded is not permitted in this function since it would generate ambiguous data.
    
    See QUrl::ComponentFormattingOption for flags
    */
    toString(options?: number): string {
        if (arguments.length == 1) {
            return this.native.toString_withOpts(options);
        }
        return this.native.toString();
    }

    /**
    Returns a string representation of the URL. The output can be customized by passing flags with options. The option QUrl::FullyDecoded is not permitted in this function since it would generate ambiguous data.
    */
    url(options: number): string {
        return this.native.url(options);
    }

    /**
    Returns the user info of the URL, or an empty string if the user info is undefined.
    */
    userInfo(options: number = ComponentFormattingOption.PrettyDecoded): string {
        return this.native.userInfo(options);
    }

    /**
    Returns the user name of the URL if it is defined; otherwise an empty string is returned.
    */
    userName(options: number = ComponentFormattingOption.FullyDecoded): string {
        return this.native.userName(options);
    }

    /**
    Returns a QUrl representation of localFile, interpreted as a local file. This function accepts paths separated by slashes as well as the native separator for this platform.
    */
    static fromLocalFile(localFile: string): QUrl {
        return new QUrl(addon.QUrl.fromLocalFile(localFile));
    }

    /**
    Returns a valid URL from a user supplied userInput string if one can be deduced. In the case that is not possible, an invalid QUrl() is returned.
    */
    static fromUserInput(
        userInput: string,
        workingDirectory?: string,
        options: number = UserInputResolutionOption.DefaultResolution,
    ): QUrl {
        if (!workingDirectory) {
            return new QUrl(addon.QUrl.fromUserInput(userInput));
        }
        return new QUrl(addon.QUrl.fromUserInput(userInput, workingDirectory, options));
    }
}
