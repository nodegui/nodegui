import addon from '../utils/addon';
import { Component, NativeElement } from '../core/Component';
import { AspectRatioMode, TransformationMode } from '../QtEnums';
import { checkIfNativeElement } from '../utils/helpers';
import { QVariant } from '../QtCore/QVariant';

/**
 
> The QPixmap class helps hold an image in the form of off-screen image representation.

* **This class is a JS wrapper around Qt's [QPixmap class](https://doc.qt.io/qt-5/qpixmap.html)**

A `QPixmap` provides ability to store an image in the memory.

### Example

```javascript
const { QPixmap } = require("@nodegui/nodegui");

const imageUrl = "path/to/png";
const pixMap = new QPixmap(imageUrl);
```
 */
export class QPixmap extends Component {
    native: NativeElement;
    constructor();
    constructor(native: NativeElement);
    constructor(filePath: string);
    constructor(arg?: string | NativeElement) {
        super();
        if (typeof arg === 'string') {
            const imagePath = arg;
            this.native = new addon.QPixmap(imagePath);
        } else if (checkIfNativeElement(arg)) {
            this.native = arg as NativeElement;
        } else {
            this.native = new addon.QPixmap();
        }
    }
    load(imagePath: string): boolean {
        return this.native.load(imagePath);
    }
    loadFromData(buffer: Buffer, format?: ImageFormats): boolean {
        return format ? this.native.loadFromData(buffer, format) : this.native.loadFromData(buffer);
    }
    save(fileName: string, format?: ImageFormats): boolean {
        return format ? this.native.save(fileName, format) : this.native.save(fileName);
    }
    scaled(
        width: number,
        height: number,
        aspectRatioMode?: AspectRatioMode,
        transformationMode?: TransformationMode,
    ): QPixmap {
        const args = [width, height];
        if (aspectRatioMode) {
            args.push(aspectRatioMode);
        }
        if (aspectRatioMode && transformationMode) {
            args.push(transformationMode);
        }
        const nativePixmap = this.native.scaled(...args);
        return new QPixmap(nativePixmap);
    }
    height(): number {
        return this.native.height();
    }
    width(): number {
        return this.native.width();
    }
    static fromQVariant(variant: QVariant): QPixmap {
        return new QPixmap(addon.QPixmap.fromQVariant(variant.native));
    }
}

export type ImageFormats = 'BMP' | 'GIF' | 'JPG' | 'JPEG' | 'PNG' | 'PBM' | 'PGM' | 'PPM' | 'XBM' | 'XPM' | 'SVG';
