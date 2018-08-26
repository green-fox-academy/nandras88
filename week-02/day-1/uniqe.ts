//  Create a function that takes a list of numbers as a parameter
//  Returns a list of numbers where every number in the list occurs only once
//  Example
//  should print: `[1, 11, 34, 52, 61]`


let numbersArray: number [] = [1, 2, 3, 1, 1, 4, 5];

function unique(array:number[]) {
  let newList = [];
  newList =  array.filter(function(element,index,array) {
    return array.indexOf(element) === index;

  });
  return newList;
}

console.log(unique(numbersArray));