'use strict';

const fs = require('fs');
const charSet: string = 'utf-8';

function getMostCommonLottoNumbers(inputFile: string): string {

  let contentFile: string[] = fs.readFileSync(inputFile, charSet).split('\n');
  let splittedText: any[] = [];
  let lotteryNumbs: string[] = [];

  for (let i: number = 0; i < contentFile.length; i++) {
    splittedText.push(contentFile[i].split(';'));
  }

  for (let j: number = 0; j < splittedText.length; j++) {
    lotteryNumbs.push(splittedText[j].slice(splittedText[j].length - 5, splittedText[j].length))
  }

  let selectedNumbers: string[] = lotteryNumbs.join(',').split(',');

  let mostCommon: object = {};

  selectedNumbers.forEach(number => {
    if (mostCommon[number] !== undefined) {
      mostCommon[number]++;
    } else {
      mostCommon[number] = 1;
    }
  });

  let sortable: any[] = [];
  for (var numbers in mostCommon) {
    sortable.push([numbers, mostCommon[numbers]]);
  }

  sortable.sort(function (a, b) {
    return a[1] - b[1];
  });
  let mostCommonLottoNumbers: string[] = [];

  sortable.slice(sortable.length - 5, sortable.length).forEach(element => {
    mostCommonLottoNumbers.push(element.slice(0, 1));
  });

  return `The most common Lotto numbers is the next:${mostCommonLottoNumbers[0]}, ${mostCommonLottoNumbers[1]}, ${mostCommonLottoNumbers[2]}, ${mostCommonLottoNumbers[3]}, ${mostCommonLottoNumbers[4]}`;

}

console.log(getMostCommonLottoNumbers('lottery.csv'));

