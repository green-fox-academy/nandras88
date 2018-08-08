const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

canvas.height = canvas.scrollHeight;
canvas.width = canvas.scrollWidth;

let squareSide = 50;
ctx.beginPath();
ctx.fillStyle = 'green';
ctx.fillRect(canvas.width/2 - (squareSide/2), canvas.height/2 - (squareSide/2), squareSide, squareSide);