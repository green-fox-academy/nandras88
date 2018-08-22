import {Animal} from './animal';
import {BreedWithEggs} from './zoointerface';

export class Reptile extends Animal implements BreedWithEggs {

  constructor(name:string) {
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