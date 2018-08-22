export abstract class Animal {
  protected name: string;
  protected age: number;
  protected gender: string;
  protected color: string;
  protected isDangerous: boolean;

  constructor(name:string) {
    name = this.name;
  }

abstract getName();
abstract breed();

}