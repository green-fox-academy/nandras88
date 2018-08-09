const canvas = document.querySelector('.main-canvas') as HTMLCanvasElement;
const ctx = canvas.getContext('2d');

function getRandomCoordinate(min, max): number {
  min = Math.ceil(0);
  max = Math.floor(600);
  return Math.floor(Math.random() * (max - min)) + min;
}

let colorOfStars: string[] = ['gainsbor', 'lightgray', 'silver', 'darkgray', 'dimgray'];

ctx.beginPath();
ctx.fillStyle = 'black';
ctx.fillRect(0, 0, canvas.width, canvas.height);
for (let i: number = 0; i <= 40; i++) {
  let x = getRandomCoordinate(0, 600);
  let y = getRandomCoordinate(0, 400);
  ctx.beginPath();
  ctx.fillStyle = colorOfStars[i % colorOfStars.length];
  ctx.fillRect(x, y, 2, 2);

}
