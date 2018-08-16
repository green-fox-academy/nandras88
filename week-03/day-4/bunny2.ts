// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

function bunnies(number:number, ears:number) {
  if(number === 0) {
    return 0;
  } else if (number % 2 !== 0 ) {
    return ears + bunnies(number - 1, ears);
  } else {
    return (ears + 1) + bunnies(number - 1, ears);

  }
}

console.log(bunnies(10,2));