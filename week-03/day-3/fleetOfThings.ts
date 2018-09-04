import { Fleet } from "./fleet";
import { Thing } from "./things";




let fleet: Fleet = new Fleet();
let getMilk: Thing = new Thing('getMilk');
let removeObs: Thing = new Thing('Remove the obstacles');
let standUp: Thing = new Thing('Stand up');
let eatLunch: Thing = new Thing('Eat Lunch');

fleet.add(getMilk);
fleet.add(removeObs);
fleet.add(standUp);
fleet.add(eatLunch);
standUp.complete();
getMilk.complete();
fleet.print();

/* Crete a fleet of things to have this output:
1. [ ] Get milk
2. [ ] Remove the obstacles
3. [x] Stand up
4. [x] Eat lunch
// Hint: You have to create a `print()` method as well */
