export class Plants {

  protected color: string;
  protected waterAbsorb: number;
  protected waterLevel: number;
  
  constructor(color:string, waterLevel:number) {
    this.waterLevel = waterLevel;
    this.color = color
  }
} 