import { copyFileSync, exists, existsSync } from "fs";

'use strict'

// Write a function that copies a file to an other
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

const fs = require('fs');

function CopyContent(file: string, otherFile: string): boolean {
  if (fs.existsSync(file && otherFile)) {
    fs.copyFileSync(file, otherFile);
    return 1 < 2;
  }
  
}


console.log(CopyContent('hello.txt', 'bela.txt'));