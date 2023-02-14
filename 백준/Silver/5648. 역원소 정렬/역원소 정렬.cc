#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> v;

long long rev(long long &n){
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return atoll(s.c_str());
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for(int i=0; i<n; i++){
        long long x;
        cin >> x;
        x = rev(x);
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(auto i : v){
        cout << i << '\n';
    }   
}