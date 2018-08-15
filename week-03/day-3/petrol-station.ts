import { readFile } from "fs";


class Station {
  gasAmount: number;

  constructor(gasAmount: number) {
    this.gasAmount = gasAmount;
  }
  refill(Car) {
    this.gasAmount -= Car.capacity;
    Car.gasAmount += Car.capacity;
  }

}

class Car {
  gasAmount: number = 0;
  capacity: number = 100;

  constructor(gasAmount, capacity) {
    this.gasAmount = gasAmount;
    this.capacity = capacity;
  }

}

let bmwCar: Car = new Car(0, 100);
let omwStation: Station = new Station(600);

omwStation.refill(bmwCar);





