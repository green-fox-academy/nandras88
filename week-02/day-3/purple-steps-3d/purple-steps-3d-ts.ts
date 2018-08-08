'use strict';

const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

let sideOfRectangle: number = 15;
let x: number = 10;
let y: number = 10;

function drawRectangle3d(){
for (let i: number = 0; i < 6; i++) {
  ctx.strokeStyle = 'black';
  ctx.lineWidth = 5;
  ctx.strokeRect(x, y, sideOfRectangle, sideOfRectangle);
  ctx.fillStyle = 'purple';
  ctx.fillRect(x, y, sideOfRectangle, sideOfRectangle);
  sideOfRectangle += sideOfRectangle/2;
  x += (sideOfRectangle / 1.5) + ctx.lineWidth;
  y += (sideOfRectangle / 1.5) + ctx.lineWidth;
}
}

drawRectangle3d();
