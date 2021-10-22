import { NativeElement } from '../core/Component';
import { checkIfNativeElement } from '../utils/helpers';
import { NodeObject, QObjectSignals } from '../QtCore/QObject';
import { QRect } from '../QtCore/QRect';
import { QSizeF } from '../QtCore/QSizeF';
import { QSize } from '../QtCore/QSize';

export class QScreen extends NodeObject<QScreenSignals> {
    native: NativeElement;
    constructor(native: NativeElement) {
        super(native);
        if (checkIfNativeElement(native)) {
            this.native = native;
        } else {
            throw new Error('QScreen cannot be initialised this way.');
        }
    }

    availableGeometry(): QRect {
        return QRect.fromQVariant(this.property('availableGeometry'));
    }
    availableSize(): QSize {
        return QSize.fromQVariant(this.property('availableSize'));
    }
    availableVirtualGeometry(): QRect {
        return QRect.fromQVariant(this.property('availableVirtualGeometry'));
    }
    availableVirtualSize(): QSize {
        return QSize.fromQVariant(this.property('availableVirtualSize'));
    }
    depth(): number {
        return this.property('depth').toInt();
    }
    devicePixelRatio(): number {
        return this.property('devicePixelRatio').toDouble();
    }
    geometry(): QRect {
        return QRect.fromQVariant(this.property('geometry'));
    }
    logicalDotsPerInch(): number {
        return this.property('logicalDotsPerInch').toDouble();
    }
    logicalDotsPerInchX(): number {
        return this.property('logicalDotsPerInchX').toDouble();
    }
    logicalDotsPerInchY(): number {
        return this.property('logicalDotsPerInchY').toDouble();
    }
    manufacturer(): string {
        return this.property('manufacturer').toString();
    }
    model(): string {
        return this.property('model').toString();
    }
    name(): string {
        return this.property('name').toString();
    }
    nativeOrientation(): ScreenOrientation {
        return <any>this.property('nativeOrientation').toInt();
    }
    orientation(): ScreenOrientation {
        return <any>this.property('orientation').toInt();
    }
    physicalDotsPerInch(): number {
        return this.property('physicalDotsPerInch').toDouble();
    }
    physicalDotsPerInchX(): number {
        return this.property('physicalDotsPerInchX').toDouble();
    }
    physicalDotsPerInchY(): number {
        return this.property('physicalDotsPerInchY').toDouble();
    }
    physicalSize(): QSizeF {
        return QSizeF.fromQVariant(this.property('physicalSize'));
    }
    primaryOrientation(): ScreenOrientation {
        return <any>this.property('primaryOrientation').toInt();
    }
    refreshRate(): number {
        return this.property('refreshRate').toDouble();
    }
    serialNumber(): string {
        return this.property('serialNumber').toString();
    }
    size(): QSize {
        return QSize.fromQVariant(this.property('size'));
    }
    virtualGeometry(): QRect {
        return QRect.fromQVariant(this.property('virtualGeometry'));
    }
    virtualSize(): QSize {
        return QSize.fromQVariant(this.property('virtualSize'));
    }
}

export interface QScreenSignals extends QObjectSignals {
    availableGeometryChanged: (geometry: QRect) => void;
    geometryChanged: (geometry: QRect) => void;
    logicalDotsPerInchChanged: (dpi: number) => void;
    orientationChanged: (orientation: ScreenOrientation) => void;
    physicalDotsPerInchChanged: (dpi: number) => void;
    physicalSizeChanged: (size: QSizeF) => void;
    primaryOrientationChanged: (orientation: ScreenOrientation) => void;
    refreshRateChanged: (refreshRate: number) => void;
    virtualGeometryChanged: (rect: QRect) => void;
}
