export enum AlignmentFlag {
  //The horizontal flags are:
  AlignLeft = 0x0001,
  AlignRight = 0x0002,
  AlignHCenter = 0x0004,
  AlignJustify = 0x0008,
  //The vertical flags are:
  AlignTop = 0x0020,
  AlignBottom = 0x0040,
  AlignVCenter = 0x0080,
  AlignBaseline = 0x0100,
  //You can use only one of the horizontal flags at a time. There is one two-dimensional flag
  AlignCenter = 0x0084
}
