const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

canvas.height = canvas.scrollHeight;
canvas.width = canvas.scrollWidth;

ctx.beginPath();
ctx.strokeStyle ='red';
ctx.moveTo(300, 0);
ctx.lineTo(300, canvas.height);
ctx.stroke();

ctx.beginPath();
ctx.strokeStyle = 'green';
ctx.moveTo(0, 200);
ctx.lineTo(canvas.width, 200);
ctx.stroke();



