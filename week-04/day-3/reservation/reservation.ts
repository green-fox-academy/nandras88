import { Reservationy } from "./interface";

'use strict';

export class Reservation implements Reservationy {

  dow: string[];
  letters: string;

  getCodeBooking() {
    this.letters = 'ABCDEFGHIJKLMNOPQRSTUVWZ123456789'
    let randomBooking = ''
    for (let i: number = 0; i < 8; i++) {
      randomBooking += this.letters.charAt((Math.floor(Math.random() * this.letters.length)));
    }
    let bookingCode = randomBooking.slice(0, 8);


    return bookingCode;
  }

  getDowBooking() {
    this.dow = ['MON', 'TUE', 'WED', 'THU', 'FRI'];
    let random = this.dow[Math.floor(Math.random() * this.dow.length)];
    return random;

  }

  creatBooking() {
    for(let j: number = 0; j <= 20; j++ ){
      console.log('Booking # ' + this.getCodeBooking() + ' for ' + this.getDowBooking());
    }
  }

}


