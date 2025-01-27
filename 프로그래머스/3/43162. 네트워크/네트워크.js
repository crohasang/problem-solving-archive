

function solution(n, computers) {
    let answer = 0;
    const graph = makeGraph(computers);
    const visited = Array(n).fill(false);
    
    
    for(let i = 0; i < n; i++) {
        if(visited[i] === false) {
            answer++;
            dfs(graph, i, visited);
        }
    }
    
    return answer;
}

function makeGraph(graph) {
    const graphArray = [];
    
    for(let i = 0; i < graph.length; i++) {
        const array = [];
        for(let j = 0; j < graph[i].length; j++) {
            
            if(i !== j) {
                if(graph[i][j] === 1) {      
                    array.push(j);
                }
            }
        }
        
        graphArray.push(array);
    }
    
    return graphArray;
}

function dfs(graph, v, visited, answerArray) {
    visited[v] = true;
    
    
    for (let node of graph[v]) {
        if(!visited[node]) {
            dfs(graph, node, visited);
        }
    }
}