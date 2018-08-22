import { Animal } from './animal';

export class Bird extends Animal {

  constructor(name: string) {
    super(name);
    this.name = name;
  }
  getName() {
    return this.name
  }
  breed() {
    return 'laying eggs.';
  }
}