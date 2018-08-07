
// create a function that takes a list of students and logs:
// - Who has got more candies than 4 candies
// create a function that takes a list of students and logs: 
//  - how many candies they have on average

const students: any[] = [
    { name: 'Mark', age: 9.5, candies: 2 },
    { name: 'Paul', age: 12, candies: 5 },
    { name: 'Clark', age: 7, candies: 3 },
    { name: 'Pierce', age: 12, candies: 7 },
    { name: 'Sean', age: 10, candies: 1 }
];

function moreCandies(list: any[]) {
    let moreThanForCandies: string[] = [];
    list.forEach((element) => {
        if (element.candies > 4) {
            moreThanForCandies.push(element.name);
        }
    })
    return moreThanForCandies
}
console.log(moreCandies(students));

function avarageCandies(list: any[]){
    let avarageCandies: number = 0;
    let sumCandies: number = 0;
    list.forEach((element) => {
        sumCandies += element.candies;
        
    })
   avarageCandies = sumCandies / list.length;
   return avarageCandies;
    
    
}
console.log(avarageCandies(students));