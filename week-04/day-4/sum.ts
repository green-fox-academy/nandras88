'use strict';


export class Sum {

  summarize: number = 0;
  sumOfElements: any[];

  constructor(sumOfElements: any[]) {
    this.sumOfElements = sumOfElements;

  }

  sumAll():number {
    this.sumOfElements.forEach(element =>
      this.summarize += element
    )
    return this.summarize;
  }

}

let numberWhatWeNeed = new Sum([1, 3, 4, 5, 6, 7, 8])

console.log(numberWhatWeNeed.sumAll());