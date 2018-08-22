import {Vehicle} from './vehicle';
import { Flyable } from './flyable';


class Helicopter extends Vehicle implements Flyable {

  land(): void {
    console.log('I am not gonna land');
  }

  fly(): void {
    console.log('Flying Babeeee');
  }

  takeOff(): void {
    console.log('I wont take off');
  }

}
