class Counter {
  baseNumber: number;
  constructor(baseNumber: number = 0) {
    this.baseNumber = baseNumber;
  }
  add(additionalNumber?: number): number {
    if (additionalNumber > 1) {
      return this.baseNumber += additionalNumber;

    } else {
      return this.baseNumber++;
    }
  }
  get(): string {
    return this.baseNumber.toString();
  }
  reset(): number {
    return this.baseNumber;
  }
}

