#include <bits/stdc++.h>
using namespace std;
int board[502][502];
int dp[502][502];
int n = 0, m = 0; // n = 행의 수, m = 열의 수
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미


int dfs(int x, int y) {

    if (x == n - 1 && y == m - 1) {
        return 1;
    }

    if (dp[x][y] == -1) {
        dp[x][y] = 0;
        for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴본다.
            int nx = x + dx[dir];
            int ny = y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
            
            }
            else {
                if (board[nx][ny] < board[x][y]) {
                    dp[x][y] += dfs(nx, ny);
                }
            }
        }
    }
    return dp[x][y];
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j]; // 입력
            dp[i][j] = -1;
        }
    }
    cout << dfs(0, 0);
    return 0;
}