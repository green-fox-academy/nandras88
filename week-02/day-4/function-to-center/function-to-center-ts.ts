'use strict';

const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

function drawLines(x, y) {
  for (let i: number = 0; i <= canvas.width / 20; i++) {
    if (canvas.width % 20 == 0) {
      ctx.beginPath();
      ctx.moveTo(x, y);
      ctx.lineTo(canvas.width / 2, canvas.height / 2);
      ctx.stroke();
      x += 20;
    }
  }
  for (let j: number = 0; j <= canvas.height / 20; j++) {
    if (canvas.height % 20 == 0) {
      ctx.beginPath();
      ctx.moveTo(x, y);
      ctx.lineTo(canvas.width / 2, canvas.height / 2);
      ctx.stroke();
      y += 20;
    }
  }
  for (let k: number = 0; k <= canvas.width / 20; k++) {
    if (canvas.width % 20 == 0) {
      ctx.beginPath();
      ctx.moveTo(x, y);
      ctx.lineTo(canvas.width / 2, canvas.height / 2);
      ctx.stroke();
      x -= 20;

    }
  }
  for (let l: number = 0; l <= canvas.height / 20; l++) {
    if (canvas.height % 20 == 0) {
      ctx.beginPath();
      ctx.moveTo(x, y);
      ctx.lineTo(canvas.width / 2, canvas.height / 2);
      ctx.stroke();
      y -= 20;

    }

  }
}

drawLines(0, 0);