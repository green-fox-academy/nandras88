// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

function bunnies(numberOfBunny: number, floppyEars: number) {
  if ( numberOfBunny === 0) {
    return 0
  } else {
    return floppyEars + bunnies(numberOfBunny - 1, floppyEars);
  }

}

console.log(bunnies(5,2));