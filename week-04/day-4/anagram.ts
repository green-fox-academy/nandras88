'use strict';


export function anagram(inputString: string, inputString2: string): boolean {
  if (inputString.toLowerCase().split('').sort().filter(element => [' ', '!', '.', ',', "'", '"', '?'].indexOf(element) == -1).join() ==
    inputString2.toLowerCase().split('').sort().filter(element => [' ', '!', '.', ',', "'", '"', '?'].indexOf(element) == -1).join()) {
    return true;
  } else {
    return false;
  }

}

console.log(anagram('was', 'saw'));

