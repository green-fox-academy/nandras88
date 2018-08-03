let LineCount: number = 4;
let line: string = '*';
let space:string = '   ';
for ( let j: number = 0; j < LineCount; j++){
console.log(space + line);
space = space.slice (0, -1);
line += "**";
}


