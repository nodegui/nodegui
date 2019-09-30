export enum DropAction {
  CopyAction = 0x1,
  MoveAction = 0x2,
  LinkAction = 0x4,
  ActionMask = 0xff,
  IgnoreAction = 0x0,
  TargetMoveAction = 0x8002
}
