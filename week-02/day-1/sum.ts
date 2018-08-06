// -  Write a function called `sum` that sum all the numbers until the given parameter
// -  The function should return the result


function sum (content: number){
    let summarize: number = 0;
    for (let i: number = 0; i <= content; i++) {
    summarize = summarize + i;

    }
    return summarize;
 }
 console.log(sum(5));