import { Aircarft } from './aircraft';
import { F35 } from './F-35';
import { F16 } from './F-16';


export class Carrier {
  listOfFlight: Aircarft[] = [];
  healthPoint: number;
  ammo: number;
  totalDamage: number = 0;

  constructor(healthPoint: number, ammo: number) {
    this.healthPoint = healthPoint;
    this.ammo = ammo;
  }
  addF16(aircraft: F16): void {
    this.listOfFlight.push(aircraft);
  }
  addF35(aircraft: F35): void {
    this.listOfFlight.push(aircraft);
  }
  fill(): void {
    this.listOfFlight.forEach(element => {
      element.refill(this.ammo);
    });
    let summarizeAmmo: number = 0;
    for (let i: number = 0; i < this.listOfFlight.length; i++) {
      summarizeAmmo += this.listOfFlight[i].maxAmmo
    }
    this.ammo -= summarizeAmmo;
  }

  fight(enemy: Carrier) {
    let carrierDamage: number = 0;
    for (let i: number = 0; i < this.listOfFlight.length; i++) {
      carrierDamage += this.listOfFlight[i].fight();
    }
    enemy.healthPoint -= carrierDamage;
    if (enemy.healthPoint <= 0) {
      console.log(`It's dead JIM....`)
    }
  }
  getStatus(): void {

    this.listOfFlight.forEach(element => {
      console.log(element.getStatus())
    });

    this.listOfFlight.forEach(element => {
      this.totalDamage += element.fight()
    });
    console.log(`HP: ${this.healthPoint}, Aircraft Count: ${this.listOfFlight.length}, Ammo: ${this.ammo},Total Damage:${this.totalDamage}`);

  }
}


