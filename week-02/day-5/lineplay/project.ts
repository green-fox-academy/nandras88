const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');


function linePlay(a) {
  for (let i: number = 0; i <= canvas.width; i++) {
    if (i % a == 0) {
      ctx.beginPath();
      ctx.strokeStyle = 'green';
      ctx.moveTo(0, i);
      ctx.lineTo(i, canvas.height);
      ctx.stroke();


    }
  }
  for (let j: number = 0; j <= canvas.width; j++) {
    if (j % a == 0) {
      ctx.beginPath();
      ctx.strokeStyle = 'purple';
      ctx.moveTo(j, 0);
      ctx.lineTo(canvas.width, j);
      ctx.stroke();


    }
  }
}

linePlay(40);

