'use strict';
// When saving this quote a disk error has occured. Please fix it.
// Add "always takes longer than" to between the words "It" and "you"
let quote: string = 'Hofstadter\'s Law: It you expect, even when you take into account Hofstadter\'s Law.'

let cutQuote = quote.slice(0,20);
let cutLongQuote = quote.slice(20,73);
let editedQuote = cutQuote.concat(' always takes longer than');
let completedQuote = editedQuote.concat(cutLongQuote);

quote = completedQuote;

console.log(quote);




