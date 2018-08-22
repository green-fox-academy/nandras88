import { StringedInstrument } from './stringedInstrument';

export class BassGuitar extends StringedInstrument {
guitarSound: string;

  constructor( numberOfStrings:number = 6 ,guitarSound:string = 'Domm-domm-dommm') {
    super()
    this.numberOfStrings =numberOfStrings;
    this.guitarSound = guitarSound;
    this.name = 'Bass Guitar';
  }
  play() {
    console.log(`${this.name},a  ${this.numberOfStrings}-stringed instrument that goes ${this.guitarSound}`);
  }

  }

