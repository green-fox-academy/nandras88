// -  Create a function called `printParams`
//    which logs to the console the input parameters
//    (can have multiple number of arguments)

function printParams (...numbers:number[]){
     numbers.forEach(elem => 
        {console.log(elem);})
}
printParams(10,30,50,60,20);