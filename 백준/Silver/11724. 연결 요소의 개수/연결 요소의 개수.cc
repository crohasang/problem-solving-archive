#include <bits/stdc++.h>
using namespace std;

vector<int> v[1001];
int visited[1001];
int N, M;
int cnt = 0;


void DFS(int x)
{
    visited[x] = 1;
    for (int i = 0; i < v[x].size(); i++)
    {
        int idx = v[x][i];
        if (visited[idx] == 0)
        {
            DFS(idx);
        }
    }
}

int main()
{
    int a, b;

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= N; i++){
        if (visited[i] == 0)
        {
            cnt++;
            DFS(i);
        }
    }
    cout << cnt;
}