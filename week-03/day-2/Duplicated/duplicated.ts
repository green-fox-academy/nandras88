const fs = require('fs');




function removeDuplicants(inputFile: string): string {

  let encodeChar: string = 'utf-8';

  let fileContent: string = fs.readFileSync(inputFile, encodeChar);

  let splitedText: string[] = fileContent.split('');

  let cleanedText: string[] = splitedText.filter(function (element, value, array) {
    return value % 2 === 0;
  });

  let perfectText: string = cleanedText.join('');

  return perfectText;

}

console.log(removeDuplicants('duplicated.txt'));


