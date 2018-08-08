const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

canvas.height = canvas.scrollHeight;
canvas.width = canvas.scrollWidth;

function lineDrawing(x, y) {
    for (let i: number = 0; i < 3; i++) {
        y += 30;
        ctx.beginPath();
        ctx.moveTo(x, y);
        ctx.lineTo( x + 50 , y );
        ctx.stroke();
    }
}

lineDrawing(30,30);