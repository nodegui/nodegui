export enum ImageConversionFlag {
    //Color/Mono preference (ignored for QBitmap)
    AutoColor = 0x00000000,
    ColorOnly = 0x00000003,
    MonoOnly = 0x00000002,
    //Dithering mode preference
    DiffuseDither = 0x00000000,
    OrderedDither = 0x00000010,
    ThresholdDither = 0x00000020,
    //Dithering mode preference for 1-bit alpha masks
    ThresholdAlphaDither = 0x00000000,
    OrderedAlphaDither = 0x00000004,
    DiffuseAlphaDither = 0x00000008,
    //Color matching versus dithering preference
    PreferDither = 0x00000040,
    AvoidDither = 0x00000080,
    AutoDither = 0x00000000,
    NoOpaqueDetection = 0x00000100,
    NoFormatConversion = 0x00000200,
}
