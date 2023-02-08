#include <bits/stdc++.h>
using namespace std;

int N,S;
int arr[30];
int cnt = 0;


void func(int x, int y){
    if(x == N){
        if(y == S){
            cnt++;
        }
        return;
    }

    func(x+1, y);
    func(x+1, y+arr[x]);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    func(0,0);

    if(S == 0){
        cnt--;
    }

    cout << cnt;
}