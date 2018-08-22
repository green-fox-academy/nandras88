
import { StringedInstrument } from './stringedInstrument';

export class ElecticGuitar extends StringedInstrument {
  guitarSound: string;

  constructor(numberOfStrings: number = 6, guitarSound: string = 'Twang') {
    super();
    this.numberOfStrings = numberOfStrings;
    this.guitarSound = guitarSound;
    this.name = 'Electric Guitar';

  }
  play() {
    console.log(`${this.name},a  ${this.numberOfStrings}-stringed instrument that goes ${this.guitarSound}`);
  }

}

