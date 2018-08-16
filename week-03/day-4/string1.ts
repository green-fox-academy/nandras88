// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.
/*
let arrayBucket: string = 'aaaaaaaaa'
let newList: string;
for (let i: number = 0; i < arrayBucket.length; i++) {
  newList = arrayBucket.replace(/a/g, 'x');
}
console.log(newList);
*/

function replaceX(letter: string, n: number) {
  if ( n === 0) {
    return '';
  } else {
    return  letter.replace(/x/g, 'y') + replaceX(letter, n - 1);
    
  }
}

console.log(replaceX('xxxxxxxxxxxx', 1));
