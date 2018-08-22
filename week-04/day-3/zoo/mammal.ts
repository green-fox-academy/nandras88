import {Animal} from './animal';

export class Mammal extends Animal {

  constructor(name:string) {
    super(name);
    this.name = name
  }
  getName() {
    return this.name
  }
  breed() {
    
    return 'pusing out miniature version.';

  }
}