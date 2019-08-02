export type NativeElement = any;
export abstract class Component {
  protected children = new Set<Component>();
  protected parent?: Component;
  abstract native: NativeElement;
}
