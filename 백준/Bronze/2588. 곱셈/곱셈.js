let fs = require("fs");
let input = fs.readFileSync("dev/stdin").toString().split("\n");

const a = Number(input[0]);
const b = Number(input[1]);

let tmp_b = b;

const b_units =tmp_b % 10;

tmp_b = parseInt(tmp_b / 10);

const b_thousands = parseInt(tmp_b / 10);
const b_tens = tmp_b % 10;

console.log(a * b_units);
console.log(a * b_tens);
console.log(a * b_thousands);
console.log(a * b);
