'use strict';


const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

canvas.height = canvas.scrollHeight;
canvas.width = canvas.scrollWidth;

let colorOfRainbow: string[] = ['red', 'orange', 'yellow', 'green', 'blue', 'indigo', 'violet'];

function squareDrawing(size, color) {
for(let i: number = 0; i <  40; i++){
ctx.fillStyle = colorOfRainbow[i % colorOfRainbow.length];
ctx.fillRect(canvas.width/2 - (size /2), (canvas.height / 2 - (size /2)), size, size);
size -= 10;
}
}

squareDrawing(400, colorOfRainbow);
