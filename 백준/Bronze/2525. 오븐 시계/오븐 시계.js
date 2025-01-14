let fs = require("fs");
let input = fs.readFileSync("dev/stdin").toString().split('\n');

let [hour, minute] = input[0].split(" ").map(Number);
const neededTime = Number(input[1]);

const sum = minute + neededTime;

const addedHour = parseInt(sum / 60);
minute = (sum % 60);

hour = hour + addedHour;

if(hour >= 24) {
  hour -= 24;
}

console.log(hour + " " + minute);
