export enum ItemFlag {
  NoItemFlags = 0,
  ItemIsSelectable = 1,
  ItemIsEditable = 2,
  ItemIsDragEnabled = 4,
  ItemIsDropEnabled = 8,
  ItemIsUserCheckable = 16,
  ItemIsEnabled = 32,
  ItemIsAutoTristate = 64,
  ItemIsTristate = 64,
  ItemNeverHasChildren = 128,
  ItemIsUserTristate = 256
}