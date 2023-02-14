#include <bits/stdc++.h>
using namespace std;

int n;
string arr[20005];
vector<string> v;

bool compare(string &a, string &b){
    int len_a = a.size();
    int len_b = b.size();
    if(len_a != len_b){
        return len_a < len_b;
    }
    else{
        return a < b;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for(int i=0; i < n; i++){
        string x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end(),compare);

    v.erase(unique(v.begin(),v.end()),v.end());

    for(auto i : v){
        cout << i << '\n';
    }
}