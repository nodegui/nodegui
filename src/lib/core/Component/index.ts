export type NativeElement = { type: "native"; [key: string]: any };
export abstract class Component {
  protected nodeChildren = new Set<Component>();
  protected nodeParent?: Component;
  abstract native: NativeElement;
}
