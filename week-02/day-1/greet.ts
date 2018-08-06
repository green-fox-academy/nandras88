// -  Create variable named `name` and assign the value `Greenfox` to it
// -  Create a function called `greet` that greets it's input parameter
//     -  Greeting is printing e.g. `Greetings, dear Greenfox`
//     -  Prepare for the special case when no parameters are given
// -  Greet `name`

let named: string = 'Greenfox';

function greet(inputName: string = 'Andras') {
    console.log('Greeetings, dear ' + inputName);

}
greet();
greet(named);