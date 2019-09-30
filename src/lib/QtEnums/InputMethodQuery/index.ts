export enum InputMethodQuery {
  ImEnabled = 0x1,
  ImMicroFocus = 0x2,
  ImCursorRectangle = 0x2,
  ImFont = 0x4,
  ImCursorPosition = 0x8,
  ImSurroundingText = 0x10,
  ImCurrentSelection = 0x20,
  ImMaximumTextLength = 0x40,
  ImAnchorPosition = 0x80,
  ImHints = 0x100,
  ImPreferredLanguage = 0x200,
  ImPlatformData = 0x80000000,
  ImAbsolutePosition = 0x400,
  ImTextBeforeCursor = 0x800,
  ImTextAfterCursor = 0x1000,
  ImEnterKeyType = 0x2000,
  ImAnchorRectangle = 0x4000,
  ImInputItemClipRectangle = 0x8000,
  //Masks:
  ImQueryAll = 0xffffffff
}
