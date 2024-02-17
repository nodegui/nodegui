import { NativeElement, Component } from '../core/Component';
import addon from '../utils/addon';
import { checkIfNativeElement } from '../utils/helpers';
import { QUrl } from './QUrl';
/**
 * description
 */
export class QMimeData extends Component {
    constructor(arg?: NativeElement) {
        let native: NativeElement;
        if (checkIfNativeElement(arg)) {
            native = arg as NativeElement;
        } else {
            native = new addon.QMimeData();
        }
        super(native);
    }

    /**
    Removes all the MIME type and data entries in the object.
    */
    clear(): void {
        return this.native.clear();
    }

    data(): Buffer | null {
        return this.native.data();
    }

    /**
    Returns true if the object can return a color (MIME type application/x-color); otherwise returns false.
    */
    hasColor(): boolean {
        return this.native.hasColor();
    }

    /**
    Returns true if the object can return HTML (MIME type text/html); otherwise returns false.
    */
    hasHtml(): boolean {
        return this.native.hasHtml();
    }

    /**
    Returns true if the object can return an image; otherwise returns false.
    */
    hasImage(): boolean {
        return this.native.hasImage();
    }

    /**
    Returns true if the object can return plain text (MIME type text/plain); otherwise returns false.
    */
    hasText(): boolean {
        return this.native.hasText();
    }

    /**
    Returns true if the object can return a list of urls; otherwise returns false.
    */
    hasUrls(): boolean {
        return this.native.hasUrls();
    }

    /**
    Returns a string if the data stored in the object is HTML (MIME type text/html); otherwise returns an empty string.
    */
    html(): string {
        return this.native.html();
    }

    /**
    Removes the data entry for mimeType in the object.
    */
    removeFormat(mimeType: string): void {
        return this.native.removeFormat(mimeType);
    }

    /*
    Sets the data associated with the MIME type given by mimeType to the specified data.
    */
    setData(mimeType: string, data: Buffer): void {
        return this.native.setData(mimeType, data);
    }

    /**
    Sets html as the HTML (MIME type text/html) used to represent the data.
    */
    setHtml(html: string): void {
        return this.native.setHtml(html);
    }

    /**
    Sets text as the plain text (MIME type text/plain) used to represent the data.
    */
    setText(text: string): void {
        return this.native.setText(text);
    }

    /**
    Sets the URLs stored in the MIME data object to those specified by urls.
    */
    setUrls(urls: [QUrl]): void {
        const natives = urls.map((v) => {
            return v.native;
        });
        return this.native.setUrls(natives);
    }

    /**
    Returns a plain text (MIME type text/plain) representation of the data.
    */
    text(): string {
        return this.native.text();
    }
    /**
     * Returns a list of URLs contained within the MIME data object.
     *
     * URLs correspond to the MIME type text/uri-list.
     */
    urls(): [QUrl] {
        const natives = this.native.urls();
        return natives.map((v: NativeElement) => {
            return new QUrl(v);
        });
    }
}
