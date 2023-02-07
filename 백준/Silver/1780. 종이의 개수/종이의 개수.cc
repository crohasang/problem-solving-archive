#include <bits/stdc++.h>
using namespace std;

int paper[2200][2200];
int cnt[3];

bool check(int x, int y, int z){
    for(int i = x; i < x + z; i++){
        for(int j = y; j < y + z; j++){
            if(paper[i][j] != paper[x][y]){
                return false;
            }
        }
    }
    return true;
}

void solve(int a, int b, int c){
    if(check(a,b,c) == true){
        cnt[paper[a][b] + 1] += 1;
        return;
    }

    c = c / 3;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            solve(a+ i * c, b + j * c, c);
        }
    }
}




int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> paper[i][j];
        }
    }

    solve(0,0,N);

    for(int i = 0; i<3; i++){
        cout << cnt[i] << '\n';
    }
}