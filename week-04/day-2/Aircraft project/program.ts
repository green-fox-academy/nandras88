import { Aircarft } from './aircraft';
import { F16 } from './F-16';
import { F35 } from './F-35';
import { Carrier } from './carrier';



let dragon: F16 = new F16();
let zealot: F16 = new F16();
let arbiter: F35 = new F35();
let carrier: F35 = new F35();

let mutalisk: F16 = new F16();
let queen: F16 = new F16();
let hydralisk: F16 = new F16();

let protoss: Carrier = new Carrier(2000, 5000);
let zerg: Carrier = new Carrier(1100, 5000);

protoss.addF16(dragon);
protoss.addF16(zealot);
protoss.addF16(arbiter);
protoss.addF16(carrier);
protoss.fill();


zerg.addF16(mutalisk);
zerg.addF16(queen);
zerg.addF16(hydralisk);
zerg.fill();


protoss.fight(zerg);
protoss.getStatus();
protoss.fill();
protoss.getStatus();

