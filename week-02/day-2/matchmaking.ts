// Write a function that joins two array by matching one girl with one boy in a new array
// Exepected output: ["Eve", "Joe", "Ashley", "Fred"...]
let girls: string[] = ['Eve', 'Ashley', 'Claire', 'Kat', 'Jane'];
let boys: string[] = ['Joe', 'Fred', 'Tom', 'Todd', 'Neef', 'Jeff'];

function makingMatches(array1: string[], array2: string[]) {
    let matchPairs = [];
    let k: number = array1.length;

    for (let i = 0; i < array2.length; i++) {
        if (i <= array1.length && array1[i] != undefined) {
            matchPairs.push(array1[i], array2[i]);

        } else  {
            matchPairs.push(array2[i]);
        }

    }

    return matchPairs;
}


let resultArray: string[] = makingMatches(girls, boys)

console.log(resultArray)