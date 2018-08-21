import { Plants } from './plants';

export class Tree extends Plants {

  needsWater: boolean;
  plantType:string;

  constructor(color: string, waterLevel: number) {
    super(color, waterLevel);
    color = this.color;
    waterLevel = this.waterLevel;
    this.plantType = 'tree';

    if(waterLevel >= 10) {
      this.needsWater = false;
    } else {
      this.needsWater = true;
    }
  }
  ifItNeedsWater() {
    if (this.needsWater == true) {
      console.log(`The ${this.color} Tree need water`);

    } else {
      console.log(`The ${this.color} Tree doesnt need water`);
    }
  }
}