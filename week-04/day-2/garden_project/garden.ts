import { Plants } from './plants';
import { Flower } from './flower';
import { Tree } from './tree';

export class Garden {
  flowers: any[];
  trees: any[];
  waterNeedIt: any[];

  constructor(tree: Tree, flower: Flower,) {
    this.trees = [];
    this.flowers = [];
    this.waterNeedIt = [];
    this.trees.push(tree);
    this.flowers.push(flower);

    if (tree.needsWater === true) {
      this.waterNeedIt.push(tree);
    } else if (flower.needsWater === true)
      this.waterNeedIt.push(flower)


  }
  getWater() {
    getWater40(this.waterNeedIt);
    getWater70(this.waterNeedIt);
    function getWater40(waterNeedIt) {
      let waterPerPlant = 40 / waterNeedIt.length;
      waterNeedIt.forEach(element => {
        if (element.plantType === 'tree') {
          element.waterLevel += waterPerPlant * 0.4;

        } else if (element.plantType === 'flower') {
          element.waterLevel += waterPerPlant * 0.75
        }
        if (element.waterLevel >= 5) {
          let elementIndex = waterNeedIt.indexOf(element);
          waterNeedIt.splice(elementIndex, 1)
        }
      });
      


    }
    function getWater70(waterNeedIt) {
    let newWaterPlants = 70 / waterNeedIt.length
    waterNeedIt.forEach(element => {
      if (element.plantType === 'tree') {
        element.waterLevel += newWaterPlants * 0.4;
      } else if (element.plantType === 'flower') {
        element.waterLevel += newWaterPlants * 0.75;
      }
      if (element.waterLevel >= 5) {
        let elementIndex = waterNeedIt.indexOf(element);
        waterNeedIt.splice(elementIndex, 1);
      }
  });

    }
}
}

