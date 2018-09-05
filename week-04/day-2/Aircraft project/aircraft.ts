import { F35 } from "./F-35";

export class Aircarft {

  airCraftType: string;
  maxAmmo: number;
  baseDamage: number;
  damage: number
  currentAmmo: number;

  constructor(airCraftType: string, maxAmmo: number, baseDamage: number) {
    this.currentAmmo = 0;
    this.baseDamage = baseDamage;
    this.maxAmmo = maxAmmo;
    this.airCraftType = airCraftType;

  }
  fight(): number {

    let damage: number = this.currentAmmo * this.baseDamage;
    this.currentAmmo = 0;
    return damage;


  }

  refill(inputAmmo: number): number {

    if (inputAmmo <= this.maxAmmo) {
      this.currentAmmo += inputAmmo;
    } else if (inputAmmo > this.maxAmmo) {
      this.currentAmmo += this.maxAmmo;
      return inputAmmo -= this.maxAmmo;
    }
  }
  getType(): string {

    return this.airCraftType;
  }

  getStatus(): string {

    return `Type ${this.airCraftType}, Ammo: ${this.currentAmmo}, Base Damage:${this.baseDamage}, All damage: ${this.currentAmmo * this.baseDamage}`;
  }

  isPriority(): boolean {
    if (this.airCraftType === 'F35') {
      return true;
    } else {
      return false;
    }
  }
}