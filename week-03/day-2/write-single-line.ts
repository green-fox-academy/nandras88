import { existsSync } from "fs";

'use strict'

// Open a file called 'my-file.txt'
// Write your name in it as a single line
// If the program is unable to write the file,
// then it should print an error message like: 'Unable to write file: my-file.txt'

const fs = require('fs');
const charSet = 'utf-8';


function writeSingleLine(fileName, fileContent) {
  if (fs.existsSync(fileName)){
  fs.writeFileSync(fileName, fileContent)
  } else {
    console.log('Unable to write file: ' + fileName);
  }
}

writeSingleLine('jozska.txt', 'pista');