'use strict'

import { Person } from "./person";


export class Mentor extends Person {

  level: string;

  constructor(name: string = 'Jane Doe', age: number = 30, gender:string = 'female', level: string = 'intermediate') {
    super(name, age, gender)
    this.level = level;


  }
  getGoal() {
    console.log('My goal is: Educate brilliant junior software developers');
  }
  introduce() {
    console.log(`Hi, I\m  ${this.name} a  ${this.age} years old  ${this.level}  mentor`);
  }
}