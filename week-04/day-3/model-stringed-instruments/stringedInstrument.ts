import { Instrument } from "./instrument";

export abstract class StringedInstrument extends Instrument {
  numberOfStrings: number;

  sound() {
    super.play();
  }


}