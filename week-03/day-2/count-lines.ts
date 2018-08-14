'use strict'


// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file, and
// should not raise any error.

const fs = require('fs');
const charSet = 'utf-8';

function readFileFrom(fileName: string) {
  try {
    return fs.readFileSync(fileName, charSet);
  } catch (error) {
    console.log('0');
  }
}

readFileFrom('result.txt');

function countLines() {
  let fileContent = readFileFrom('result.txt');
  let countLines = 0;
  fileContent.split('\n').forEach(element => {
    countLines++;

  });
  console.log(countLines);
}

countLines();

//console.log(fileContent.split('\n').length); Solution B