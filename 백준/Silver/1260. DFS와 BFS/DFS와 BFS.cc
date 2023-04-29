#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
int board[1001][1001];
bool vis[1001];
int n, m, v;
queue <int> q;

void reset() {
	for (int i = 1; i <= n; i++) {
		vis[i] = 0;
	}
}

void dfs(int v) {
	vis[v] = 1;
	cout << v << " ";
	for (int i = 1; i <= n; i++) {
		if (board[v][i] == 1 && vis[i] == 0) {
			dfs(i);
		}
	}
}

void bfs(int v) {
	q.push(v);
	vis[v] = 1;
	cout << v << " ";

	while (!q.empty()) {

		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (board[v][i] == 1 && vis[i] == 0) {
				q.push(i);
				vis[i] = 1;
				cout << i << " ";
			}
		}
	}
}


	

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		board[a][b] = 1;
		board[b][a] = 1;
	}

	reset();
	dfs(v);
	reset();

	cout << '\n';

	bfs(v);

	return 0;
}