class Student {

  learn() {
    console.log('I am busy with homework!');
  }
  question(Teacher) {
    return Teacher.answer();
  }
}

class Teacher {

  teach(Student) {
    return Student.learn();
  }
  answer() {
    console.log('No worrys Budy, I gonna help you!!');
  }
}

let andras: Student = new Student();
let mark: Teacher = new Teacher();


