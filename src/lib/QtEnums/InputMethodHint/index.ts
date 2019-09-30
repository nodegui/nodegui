export enum InputMethodHint {
  ImhNone = 0x0,
  //Flags that alter the behavior
  ImhHiddenText = 0x1,
  ImhSensitiveData = 0x2,
  ImhNoAutoUppercase = 0x4,
  ImhPreferNumbers = 0x8,
  ImhPreferUppercase = 0x10,
  ImhPreferLowercase = 0x20,
  ImhNoPredictiveText = 0x40,
  ImhDate = 0x80,
  ImhTime = 0x100,
  ImhPreferLatin = 0x200,
  ImhMultiLine = 0x400,
  ImhNoEditMenu = 0x800,
  ImhNoTextHandles = 0x1000,
  //Flags that restrict input (exclusive flags)
  ImhDigitsOnly = 0x10000,
  ImhFormattedNumbersOnly = 0x20000,
  ImhUppercaseOnly = 0x40000,
  ImhLowercaseOnly = 0x80000,
  ImhDialableCharactersOnly = 0x100000,
  ImhEmailCharactersOnly = 0x200000,
  ImhUrlCharactersOnly = 0x400000,
  ImhLatinOnly = 0x800000,
  //Masks:
  ImhExclusiveInputMask = 0xffff0000
}
