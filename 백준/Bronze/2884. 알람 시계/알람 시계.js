let fs = require("fs");
let input = fs.readFileSync("dev/stdin").toString().split(" ");

let hour = Number(input[0]);
let minute = Number(input[1]);

if (minute >= 45) {
  minute = minute - 45;
}

else {
  if(hour !== 0) {
    hour = hour - 1;
  }
  else {
    hour = 23;
  }
  const left_minute = 45 - minute;
  minute = 60 - left_minute;
}

console.log(hour + " " + minute);
