import { Plants } from './plants';

export class Flower extends Plants {

  needsWater:boolean;
  plantType:string;

  constructor(color:string , waterLevel: number) {
    super(color, waterLevel)
    color = this.color;
    waterLevel = this.waterLevel;
    this.plantType = 'flower';

    if(waterLevel >= 5) {
      this.needsWater = false;
    } else {
      this.needsWater = true;
    }
  }
  ifItNeedsWater() {
    if (this.needsWater === true) {
      console.log(`The ${this.color} Flower need water`);

    } else {
      console.log(`The ${this.color} Flower doesnt need water`);
    }
  }
}
