'use strict';

const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');


let side: number = 20;

for (let y: number = 0; y <= canvas.height; y++) {
  for (let x: number = 0; x <= canvas.width; x++) {

    if (x % 2 == 0 && y % 2 == 0) {
      ctx.fillRect(x * side, y * side, side, side);
    }
    else {
      if (x % 2 == 0) {
        ctx.fillRect(x * side + side, y * side, side, side);
      }

    }
  }
}
