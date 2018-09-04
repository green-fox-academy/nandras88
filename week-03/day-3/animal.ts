import { createSecureContext } from "tls";

export class Animal {

  hunger: number;
  thirst: number;

  constructor(hunger: number = 50, thirst: number = 50) {
    this.hunger = hunger;
    this.thirst = thirst;
  }
  eat(): number {
    return this.hunger--;
  }
  drink(): number {
    return this.thirst--;
  }
  play(): number {
    return this.hunger++ , this.thirst++;

  }

}

export class Farm {

  listOfAnimals: Animal[] = [];

  constructor() {

  }
  breed(): void {
    if (this.listOfAnimals.length < 5) {
      let creature = new Animal(20, 30);
      this.listOfAnimals.push(creature);
    } else {
      console.log(`Sorry Mate We do not have any slots`)
    }
  }
  add(animal: Animal): void {
    this.listOfAnimals.push(animal);
  }
  slaughter() {
    this.listOfAnimals.sort(function (a, b) {
      return b.hunger - a.hunger;

    });
    this.listOfAnimals.splice(0, 1);
  }
}

let gergo: Animal = new Animal();
let nagyG: Animal = new Animal(30, 20);
let bigB: Animal = new Animal(100, 100);

let farmWhereWeLive: Farm = new Farm();
farmWhereWeLive.add(gergo);
farmWhereWeLive.add(nagyG);
farmWhereWeLive.add(bigB);

gergo.eat();
farmWhereWeLive.slaughter();
console.log(farmWhereWeLive.listOfAnimals);

