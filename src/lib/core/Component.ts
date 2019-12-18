export type NativeElement = { type: 'native'; [key: string]: any };
export abstract class Component {
    nodeChildren = new Set<Component>();
    nodeParent?: Component;
    setNodeParent(parent?: Component): void {
        this.nodeParent = parent;
        parent?.nodeChildren.add(this);
    }
    abstract native: NativeElement;
}
