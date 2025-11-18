#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 0;
bool visited[8];

void dfs(int k, const vector<vector<int>>& dungeons, int cnt) {
    
    if (cnt > answer) {
        answer = cnt;
    }
    
    for(int i = 0; i < dungeons.size(); i++) {
        if (visited[i] == false &&  k >= dungeons[i][0]) {
            visited[i] = true;
            dfs(k - dungeons[i][1], dungeons, cnt + 1);
            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    answer = 0;
    dfs(k, dungeons, 0);
    return answer;
}