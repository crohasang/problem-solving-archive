#include <bits/stdc++.h>
using namespace std;
int board[305][305];
int dist[305][305]; // 해당 칸을 방문했는지 여부를 저장

#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int dx[8] = { 1, 2, 2, 1, -1 ,-2, -2 , -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; // 나이트가 이동하는 방향 8가지
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {

        bool find = false; // 찾았을 때 루프를 빠져나오기 위해 만든 변수
        int n = 0; // n = 체스판의 한 변의 길이
        int nowx = 0, nowy = 0; // 나이트가 현재 있는 칸
        int tox = 0, toy = 0;  // 나이트가 이동하려는 칸

        cin >> n; // 체스판의 한 변의 길이 입력
        cin >> nowx >> nowy; // 나이트가 현재 있는 칸 입력
        cin >> tox >> toy; // 나이트가 이동하려는 칸 입력

        if (nowx == tox && nowy == toy) { // 만약 나이트가 위치한 곳이 목표한 곳이라면 바로 0 출력
            cout << 0 << "\n";
            continue;
        }

        for (int i = 0; i < n; i++) { // 초기화
            for (int j = 0; j < n; j++) {
                dist[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++) { // 초기화
            for (int j = 0; j < n; j++) {
                board[i][j] = 0;
            }
        }

        queue<pair<int, int> > Q;
        dist[nowx][nowy] = 0; // (0, 0)을 방문했다고 명시
        board[tox][toy] = 2; // 목적지는 board가 2
        Q.push({ nowx, nowy }); // 큐에 시작점인 (0, 0)을 삽입.
        while (!Q.empty()) {
            pair<int, int> cur = Q.front(); Q.pop();

            for (int dir = 0; dir < 8; dir++) { // 상하좌우 칸을 살펴볼 것이다.
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
                if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // 범위 밖일 경우 넘어감
                if (dist[nx][ny] >= 0) continue; // 이미 방문한 칸일 경우 넘어감
                dist[nx][ny] = dist[cur.X][cur.Y] + 1; // (nx, ny)를 방문했다고 명시
                
                if (board[nx][ny] == 2) { // board가 2라면(목적지에 도착했다면)
                    cout << dist[nx][ny] << '\n'; // 몇번 이동했는지 출력
                    find = true; // find를 true로 바꿔준다.
                    break;
                }

                Q.push({ nx,ny }); 
                
                
                if (find == true) { // find가 true면 루프 탈출
                    break;
                }
            }
        }
    }
}