'use strict'


// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file, and
// should not raise any error.

const fs = require('fs');
const charSet = 'utf-8';

function readFileFrom(filename: string) {
  
  try {
    return fs.readFileSync(filename, charSet);
  } catch (error) {
    console.log('0');

  }
}

readFileFrom('results.txt');