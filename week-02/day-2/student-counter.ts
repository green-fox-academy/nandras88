// create a function that takes a list of students and logs: 
// - how many candies are owned by students
// create a function that takes a list of students and logs:
// - Sum of the age of people who have lass than 5 candies

const students: any[] = [
  {name: 'Theodor', age: 3, candies: 2},
  {name: 'Paul', age: 9.5, candies: 2},
  {name: 'Mark', age: 12, candies: 5},
  {name: 'Peter', age: 7, candies: 3},
  {name: 'Olaf', age: 12, candies: 7},
  {name: 'George', age: 10, candies: 1}
];

function numberOfCandies(list:any []) {
    let sum = 0;
    list.forEach((element) => {
        sum += element.candies;
    } )
console.log(sum); 
}
numberOfCandies(students);

function lessCandies(list: any[]) {
    let summarizeAge = 0;
list.forEach((element) => {
    if (element.candies < 5)
        summarizeAge += element.age;

    })
console.log(summarizeAge);
}
lessCandies(students);
