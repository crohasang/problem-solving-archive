const fs = require('fs');

let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

const [nm, ...arr] = input;

const [n,m] = nm.split(' ').map((v) => +v);

const graph = arr.map((v1) => v1.split(' ').map((v2) => +v2));

const dir = [[0, 1], [0, -1], [1, 0], [-1, 0]];

const visited = Array.from(Array(n), () => Array(m).fill(false));

const bfs = (graph, sx, sy) => {
  const q = [];
  q.push([sx, sy]);
  visited[sx][sy] = true;

  let area = 1;

  
  while(q.length !== 0) {
    const [x, y] = q.shift();

    for(let i = 0; i < 4; i++) {
      const nx = x + dir[i][0];
      const ny = y + dir[i][1];

      if(nx < 0 || nx >= n || ny < 0 || ny >= m) {
        continue;
      }

      if(!visited[nx][ny] && graph[nx][ny] === 1) {
        q.push([nx, ny]);
        visited[nx][ny] = true;
        area++;
      }
    }
  }

  return area;
}

let paintCount = 0;
let maxArea = 0;

for(let i = 0; i < n; i++) {
  for(let j = 0; j < m; j++) {
    if(!visited[i][j] && graph[i][j] === 1) {
      paintCount++;
      const area = bfs(graph, i, j);
      maxArea = Math.max(area, maxArea);
    }
  }
}

console.log(paintCount);
console.log(maxArea);