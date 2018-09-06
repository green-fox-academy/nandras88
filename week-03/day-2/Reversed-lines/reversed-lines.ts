

const fs = require('fs');

function reverseText(inputFile: string): string {

  let encodeChar: string = 'utf-8';
  let fileContent: string = fs.readFileSync(inputFile, encodeChar);
  let splittedText: string[] = fileContent.split('');
  let reversedText: string[] = [];
  let cleanArray: string[] = [];

  for (let i: number = splittedText.length; i >= 0; i--) {
    reversedText.push(splittedText[i]);
  }

  let unSortedText: string[] = reversedText.join('').split('\n');

  for (let j: number = unSortedText.length; j >= 0; j--) {
    cleanArray.push(unSortedText[j]);

  }
  let cleanedText: string = cleanArray.join('\n');


  return cleanedText;
}

console.log(reverseText('reversed-lines.txt'))