'use strict';

let characters: any[] = [' ', '!', '.', ',', "'", '"', '?']

export function anagram(inputString: string, inputString2: string): boolean {
  return (inputString.toLowerCase().split('').sort().filter(element => characters.indexOf(element) == -1).join() ==
    inputString2.toLowerCase().split('').sort().filter(element => characters.indexOf(element) == -1).join()) ;
  
  
}

console.log(anagram('was', 'saw'));

