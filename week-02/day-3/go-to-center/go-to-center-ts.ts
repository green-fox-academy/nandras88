const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

canvas.height = canvas.scrollHeight;
canvas.width = canvas.scrollWidth;



function lineDrawing(x, y) {
    ctx.beginPath();
    ctx.strokeStyle = "blue";
    ctx.moveTo(x, y);
    ctx.lineTo( canvas.width/2, canvas.height/2);
    ctx.stroke();
    for(let i = 0; i < 2; i++){
        ctx.beginPath();
        x += 100
        y += 100;
        ctx.moveTo(x, y);
        ctx.lineTo(canvas.width/2, canvas.height/2);
        ctx.stroke();


    }

}

lineDrawing(40,40);
