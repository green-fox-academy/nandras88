let currentHours: number = 14;
let currentMinutes: number = 34;
let currentSeconds: number = 42;
let currentHoursInSecond: number = currentHours * 3600;
let currentMinutesInSecond: number = currentMinutes * 60;
let dayInSecond: number = 86400;
let remainingSecond: number = dayInSecond - currentHoursInSecond - currentMinutesInSecond - currentSeconds;
console.log('The remaining seconds from a day is :' + remainingSecond + ' seconds');
