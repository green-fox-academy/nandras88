const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

canvas.height = canvas.scrollHeight;
canvas.width = canvas.scrollWidth;

let a = 10;
let b = 210;

ctx.beginPath();
ctx.strokeStyle = 'red';
ctx.moveTo(a, b);
ctx.lineTo( b, b);
ctx.stroke();

ctx.beginPath();
ctx.strokeStyle = 'green';
ctx.moveTo(a, a);
ctx.lineTo(a, b);
ctx.stroke();

ctx.beginPath();
ctx.strokeStyle = 'blue';
ctx.moveTo(b, a);
ctx.lineTo(a, a);
ctx.stroke();

ctx.beginPath();
ctx.strokeStyle = 'yellow';
ctx.moveTo(b, a);
ctx.lineTo(b, b);
ctx.stroke();


