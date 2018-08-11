let numList = [3, 4, 5, 6, 7, ];
console.log(numList.reverse());



let numListNew = [3 ,4 ,5 ,6 ,7];

function reverseNumlist(){
  let newNumlist: any = [];
  for (let i: number =  numListNew.length - 1; i >= 0; i--){
    newNumlist += numListNew[i];

  }
  console.log(newNumlist);
}

reverseNumlist();

