class Thing {
  private name: string;
  private completed: boolean;

  constructor(name: string) {
    this.name = name;
  }

  public complete() {
    this.completed = true;
  }
  public printCompleted(): string {
    if (this.completed) {
      return `[X]`;
    } else {
      return `[ ]`;
    }
  }
  public getStatus(): string {

    return `${this.name}`;
  }

}


export { Thing };