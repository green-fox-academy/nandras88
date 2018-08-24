'use strict';

let characters: any[] = [' ', '!', '.', ',', "'", '"', '?']

export function anagram(inputString: string, inputString2: string): boolean {
  return (checkAnagram(inputString) == checkAnagram(inputString2));
}

console.log(anagram('was', 'saw'));

function checkAnagram(param:string) {
  param.toLowerCase().split('').sort().filter(element => characters.indexOf(element) == -1).join()
}