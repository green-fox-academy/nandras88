import { Thing } from "./things";

export class Fleet {
  private things: Thing[];

  constructor() {
    this.things = [];
  }

  add(thing: Thing) {
    this.things.push(thing);
  }

  print() {
    for (let i: number = 0; i < this.things.length; i++) {
      console.log(`${this.things.indexOf(this.things[i]) + 1} ${this.things[i].printCompleted()} ${this.things[i].getStatus()}`);

    }
  }
}