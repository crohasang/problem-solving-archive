#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
bool isused[10];
int num[10];
set<vector<int>> s;

void func(int k, int st){
    if(k == m){
        vector<int> v;
        for(int i = 0; i < m; i++){
            v.push_back(arr[i]);
        }
        s.insert(v);
        v.clear();
    }

    for(int i = st; i < n; i++){
        if(isused[i] == 0){
            isused[i] = 1;
            arr[k] = num[i];
            func(k+1, i+1);
            isused[i] = 0;
        }
    }
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    sort(num, num+n);

    func(0,0);

    for(auto vector:s){
        for(auto temp:vector){
            cout << temp << " ";
        }
        cout << '\n';
    }
}