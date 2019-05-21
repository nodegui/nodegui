export abstract class Component {
  children = new Set<Component>(); //TODO if react stub these as react will manage the instances from beings gc'ed better.
  parent: Component | null = null;
  abstract native: any;
}
