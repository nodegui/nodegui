export abstract class Component {
  children = new Set<Component>();
  parent: Component | null = null;
  abstract native: any;
}
