let lineCount: number = 6;
let shortSide: string = '%%%%%'
let longSide: string = '%'

for (let i: number = 0; i < lineCount; i++) {
    if (i == 1) {
        console.log(longSide + longSide + '  ' + longSide);
    } else if (i == 2) {
        console.log(longSide + ' ' + longSide + ' ' + longSide);
    } else if (i == 3) {
        console.log(longSide + '  ' + longSide + longSide);
    } else if (i == 4) {
        console.log(longSide + '   ' + longSide);
    } else if (i == 0 || i == 5) {
        console.log(shortSide);
    }
}

