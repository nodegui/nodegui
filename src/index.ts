interface NodeDesktop {
  myMethod1: (arg1: number) => null;
}

export default require("../build/Release/node_desktop.node") as NodeDesktop;
