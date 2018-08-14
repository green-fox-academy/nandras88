'use strict'

const fs = require('fs');
const charSet = 'utf-8';

function readFile(fileName:string) {
  try {
  let fileContent = fs.readFileSync(fileName, charSet);
  console.log(fileContent);
  } catch (error) {
    console.log('Unable to read file: ' + fileName);
  
  }
}

readFile('hello.txt');