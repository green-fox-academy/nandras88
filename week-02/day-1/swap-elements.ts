// -  Create a variable named `abc` with the following content: `["Arthur", "Boe", "Chloe"]`
// -  Swap the first and the third element of `abc`

let abc = ['Arthur', 'Boe', 'Chloe'];

abc.splice(0,1);
abc.push('Arthur');
abc.splice(1,1);
abc.unshift('Chloe');

console.log(abc);

// Other solution
let abc1 = ['Arthur', 'Boe', 'Chloe'];

abc1.reverse();

console.log(abc1);