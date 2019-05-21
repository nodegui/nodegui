import { Component } from "../Component";

type Callback = () => void;

export abstract class EventComponent extends Component {
  abstract setEventListener(event: string, callback: Callback): void;
}
