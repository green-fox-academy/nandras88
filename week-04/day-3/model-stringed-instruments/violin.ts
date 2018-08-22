
import { StringedInstrument } from './stringedInstrument';

export class Violin extends StringedInstrument {
guitarSound: string;

  constructor( numberOfStrings:number = 4 ,guitarSound:string = 'Screech') {
    super();
    this.numberOfStrings = numberOfStrings;
    this.guitarSound = guitarSound ;
    this.name = 'Violin';
  }
  play() {

    console.log(`${this.name},a  ${this.numberOfStrings}-stringed instrument that goes ${this.guitarSound}`);

  }

}