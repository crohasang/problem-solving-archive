#include <bits/stdc++.h>
using namespace std;
int d[1005][3];
int s[1005][3];
int n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int tot = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 3; j++){
            cin >> s[i][j];
        }
    }

    d[1][0] = s[1][0];
    d[1][1] = s[1][1];
    d[1][2] = s[1][2];

    for(int i = 2; i <= n; i++){
        d[i][0] = min(d[i-1][1], d[i-1][2]) + s[i][0];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + s[i][1];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + s[i][2];
    }

    cout << min({d[n][0], d[n][1], d[n][2]});
}