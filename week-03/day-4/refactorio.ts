// Create a recursive function called `refactorio`
// that returns it's input's factorial

function recursive(n: number) {
  if (n === 0) {
    return 1
  } else {
    return n * recursive(n - 1);
  }
}

console.log(recursive(5));