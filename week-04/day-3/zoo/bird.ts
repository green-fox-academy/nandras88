import { Animal } from './animal';
import { Flyable } from '../Flyable/flyable';
import { BreedWithEggs } from './zoointerface';


export class Bird extends Animal implements Flyable, BreedWithEggs {

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
  land(){
    return 'No way Man';
  }
  fly() {
    return 'I gonna fly';
  }
  takeOff() {
    return 'No way';
  }
}