// Write a recursive function that takes one parameter: n and counts down from n.

function counter(n: number) {
  if (n > 0) {
    console.log(n);
    counter(n - 1);
  }
}

counter(10);

