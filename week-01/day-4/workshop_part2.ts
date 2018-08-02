let a: number = 3;
a = 3 + 10;
console.log( a );

let b: number = 100;
b = 100 - 7;
console.log( b );

let c: number = 44;
c = c * 2;
console.log( c );

let d: number = 125;
d = d / 5;
console.log( d );

let e: number = 8;
e = e * e * e;
console.log( e );

let f1 : number = 123;
let f2 : number = 345;
if ( f1 > f2 ) {
    console.log( "true" );
}else 
    console.log( "false" ); 
    {
}
//Master Mark created...
console.log( f1 > f2 );

let g1: number = 350;
let g2: number = 200;
console.log( g2 * g2 > g1 );

let h: number = 1357988018575474;
let jozska : boolean = true;
if ( h % 11 == 0) {
    console.log( jozska );
 } else {
     jozska = false;
console.log( jozska );
}

let i1: number = 10;
let i2: number = 3;
let i3: boolean = true;
let squared = i2 * i2;
let cube = i2 * i2 * i2;

if ( i1 > squared && i1 < cube ){
    console.log ( i3 );
} else {
    i3 = false;
    console.log ( i3 );
}

let j: number = 1521;
let steve : boolean = true;

if ( j % 3 == 0 || j % 5 == 0 ){
    console.log( steve );
}

let k: string = "Apple";
console.log( k + k + k + k);

let sideA: number = 10;
let sideB: number = 10;
let sideC: number = 10;
let volume: number = sideA * sideB * sideC;
let SurfaceArea: number = ( (sideA * sideA) * 2 ) + ( ( sideB * sideB ) *2 ) + ( ( sideC * sideC) *2 );

console.log( "Volume " + volume );
console.log( "Surface Area " + SurfaceArea);

let currentHours: number = 14;
let currentMinutes: number = 34;
let currentSeconds: number = 42;
let totalSecondInADay: number = 86400;
let currentHoursInMinute: number = 50400;
let currentMinutesInSecond: number = 2040;
let remainingSeconds: number = ( totalSecondInADay - currentHoursInMinute - currentMinutesInSecond - currentSeconds );

console.log(remainingSeconds);

let a1: number = 24;
let out: number = 0;

if ( a1 % 2 == 0 ) {
    out ++;
}
console.log(out);

let b1: number = 13;
let out2: string = '';

if ( b1 > 10 && b1 < 20 ) {
    out2 = "Sweet!";
} else if ( b1 < 10) {
    out2 = "Less!";
} else if ( b1 > 20 ) {
 out2 = "More!";
}
console.log(out2);

let c1: number = 123;
let credits: number = 100;
let isBonus: boolean = false;

if ( credits >= 50 && isBonus == false ) {
    c1 -= 2;

} else if ( credits < 50 && isBonus == false ) {
    c1 -= 1;
} else if ( isBonus) {
 
}
console.log(c1);

let d1: number = 8;
let time: number = 120;
let out3: string = '';

if ( d1 % 4 == 0 && time < 200 ) {
    out3 = "check";
} else if ( time > 200 ) {
    out3 = " Time out";
} else {
    out3 = "Run Forest Run";
}
console.log(out3);

let q = 0;
let exam = " I won\'t cheat on the exam!!";
for ( q = 0; q < 100; q ++) {
    console.log (exam);
}












    
 





