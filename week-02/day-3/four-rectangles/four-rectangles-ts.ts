const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

canvas.height = canvas.scrollHeight;
canvas.width = canvas.scrollWidth;

function getRandomInt(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min)) + min;
  }

  
let color: string [] = ['blue', 'red', 'green', 'pink', 'purple']

function drawSquare(x,y){
    for(let i = 0; i < 4; i++){
        x += 50;
        y += 50;
        let sizeOfSquare = getRandomInt(0, 50);
        ctx.beginPath();
        ctx.fillStyle = color[i % color.length];
        ctx.fillRect (x , y, sizeOfSquare, sizeOfSquare);
    }
}

drawSquare(40,50);