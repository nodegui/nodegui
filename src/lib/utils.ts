import { NativeElement } from "./core/Component";

export const checkIfNativeElement = (arg: any) => {
  const nativeArg = arg as NativeElement;
  return typeof nativeArg === "object" && nativeArg.type === "native";
};
