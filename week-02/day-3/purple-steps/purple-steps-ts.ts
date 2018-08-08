'use strict';

const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

let sideOfRectangle = 15;
let x = 10;
let y = 10;

function drawPurpleSteps(){
for (let i: number = 0; i < 19; i++) {
  ctx.strokeStyle = 'black';
  ctx.lineWidth = 5;
  ctx.strokeRect(x, y, sideOfRectangle, sideOfRectangle);
  ctx.fillStyle = 'purple';
  ctx.fillRect(x, y, sideOfRectangle , sideOfRectangle);
  x += sideOfRectangle +5;
  y += sideOfRectangle +5;
 }
}

drawPurpleSteps();
