// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

function numberAdd(n: number) {
  if (n === 0) {
    return 1
  } else {
    return n + numberAdd(n - 1);
  }
}
console.log(numberAdd(5));


