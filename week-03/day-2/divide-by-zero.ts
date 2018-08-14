

function divide(a: number): any {
  if (a === 0) {
    throw new TypeError('FAIIIILLLLLL');
  }
  return 10 / a;

}

try {
  console.log(divide(5));
} catch (error) {
  console.log(error.message);
}




