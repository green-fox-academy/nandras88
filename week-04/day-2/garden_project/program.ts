import { Plants } from './plants';
import { Flower } from './flower';
import { Tree } from './tree';
import { Garden } from './garden';

let ibolya = new Flower('green', 5);
let akac = new Tree('barna', 4);
let muskatli = new Flower('pink', 3);
let fuz = new Tree('kek', 3)
let testGarden = new Garden (akac, ibolya);





console.log(testGarden.waterNeedIt);
console.log(testGarden.getWater());
console.log(testGarden.waterNeedIt);

