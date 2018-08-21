'use strict';

import { Mentor } from './mentor';
import { Student } from './student';

export class Cohort {
  protected name: string;
  protected students: any[];
  protected mentors: any[];

  constructor(name: string) {
    this.name = name;
    this.students = [];
    this.mentors = [];
  }
  addStudent(student: Student) {
    this.students.push(student);
  }
  addMentor(mentor: Mentor) {
    this.mentors.push(mentor);
  }
  info() {
    console.log(`The ${this.name} has a ${this.students.length} student and has a ${this.mentors.length} mentor. `)
  }
}