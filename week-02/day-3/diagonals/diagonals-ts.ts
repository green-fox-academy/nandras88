const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

canvas.height = canvas.scrollHeight;
canvas.width = canvas.scrollWidth;

ctx.beginPath();
ctx.strokeStyle = "green";
ctx.moveTo(0, 400);
ctx.lineTo(600, 0);
ctx.stroke();

ctx.beginPath();
ctx.strokeStyle = 'red';
ctx.moveTo(0 , 0);
ctx.lineTo(600, 400);
ctx.stroke();