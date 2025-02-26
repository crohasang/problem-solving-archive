let fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().split("\n");
const firstline = input[0].split(" ");

const row_count = parseInt(firstline[0]);
const column_count = parseInt(firstline[1]);
const god_like_count = parseInt(firstline[2]);

const map = [];

for (let i = 1; i <= row_count; i++) {
  map.push(input[i].split(""));
}

const godLikeString = [];

for (let i = row_count + 1; i < row_count + 1 + god_like_count; i++) {
  godLikeString.push(input[i]);
}

for (targetString of godLikeString) {

  const memo = new Map();
  
  const firstCharPositions = [];

  for(let i = 0; i < row_count; i++) {
    for(let j = 0; j < column_count; j++) {
      if(map[i][j] === targetString[0]) {
        firstCharPositions.push([i,j]);
      }
    }
  }

  let count = 0;

  for(const [startX, startY] of firstCharPositions) {
    count += searchPaths(startX, startY, targetString, 0, memo);
  }

  console.log(count);
}



function searchPaths(x, y, targetString, index, memo) {

  const key = `${x},${y},${index}`;

  if (memo.has(key)) {
    return memo.get(key);
  }
  
  if(index === targetString.length - 1) {
    if(map[x][y] === targetString[index]) {
      return 1;
    }
  }

  if(map[x][y] !== targetString[index]) {
    return 0;
  }

  const dx = [-1, -1, -1, 0, 0, 1, 1, 1];
  const dy = [-1, 0, 1, -1, 1, -1, 0, 1];
  let found = 0;

  for(let dir = 0; dir < 8; dir++) {
    let nx = (x + dx[dir] + row_count) % row_count;
    let ny = (y + dy[dir] + column_count) % column_count;


    if(nx < 0) {
      nx += row_count;
    }
    
    if (nx >= row_count) {
      nx -= row_count;
    }

    if(ny < 0 ) {
      ny += column_count;
    }

    if(ny >= column_count) {
      ny -= column_count;
    }

    found += searchPaths(nx, ny, targetString, index + 1, memo);
    
  }

  memo.set(key, found);
  return found;

  
}