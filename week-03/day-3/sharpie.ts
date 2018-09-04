export class Sharpie {
  color: string;
  width: number;
  inkAmount: number;
  constructor(color: string, width: number, inkAmount: number = 100) {
    this.color = color;
    this.width = width;
    this.inkAmount = inkAmount;
  }
  use(): number {
    return this.inkAmount--;
  }
}


class SharpiSet {

  listOfSharpie: Sharpie[] = []

  constructor() {

  }
  countUsabele(sharpie: Sharpie): void {
    if (sharpie.inkAmount > 0) {
      this.listOfSharpie.push(sharpie);
    }
  }
  removeTrash(): void {
    this.listOfSharpie.sort(function (a, b) {
      return b.inkAmount - a.inkAmount;
    });

    for (let i: number = 0; i < this.listOfSharpie.length; i++) {
      if (this.listOfSharpie[i].inkAmount == 0) {
        this.listOfSharpie.splice(i, this.listOfSharpie.length);

      }
    }

  }
}
let gerike: Sharpie = new Sharpie('purple', 2, 1);
let gergo: Sharpie = new Sharpie('crimson', 10, 2);
let bandi: Sharpie = new Sharpie('black', 100, 1);
let mark: Sharpie = new Sharpie('blue', 50, 1);
let gergoGarden: SharpiSet = new SharpiSet();
let papika: Sharpie = new Sharpie('yellow', 1, 3);
let papi: Sharpie = new Sharpie('pink', 1, 5);
let papoja: Sharpie = new Sharpie('green', 1, 1);

gergoGarden.countUsabele(papika);
gergoGarden.countUsabele(papi);
gergoGarden.countUsabele(papoja);
gergoGarden.countUsabele(gerike);
gergoGarden.countUsabele(gergo);
gergoGarden.countUsabele(bandi);
gergoGarden.countUsabele(mark);

papika.use();
papi.use();
papoja.use();
gerike.use();
bandi.use();
mark.use();
gergoGarden.removeTrash();
console.log(gergoGarden.listOfSharpie);
