'use strict';

let characterSet: any[] = [' ', '!', '.', ',', "'", '"', '?']

function anagramm(inputString: string, inputString2: string): boolean {
  return (checkAnagrams(inputString) == checkAnagrams(inputString2));
}


function checkAnagrams(param: string) {
  param = param.toLowerCase().split('').sort().filter(element => characterSet.indexOf(element) == -1).join('');
  return param;
}
