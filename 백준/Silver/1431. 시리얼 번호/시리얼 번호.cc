#include <bits/stdc++.h>
using namespace std;

int n;
string st;
vector<string> v;

bool compare(string &a, string &b){
    int len_a = a.size();
    int len_b = b.size();

    if(len_a != len_b){
        return len_a < len_b;
    }

    int sum_a = 0, sum_b = 0;

    for(int i = 0; i < len_a; i++){
        if(isdigit(a[i])){
            sum_a = sum_a + (a[i]-'0');
        }
    }

    for(int i = 0; i < len_b; i++){
        if(isdigit(b[i])){
            sum_b = sum_b + (b[i]-'0');
        }
    }

    if(sum_a != sum_b){
        return sum_a < sum_b;
    }

    return a < b;
}


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> st;
        v.push_back(st);
    }

    sort(v.begin(), v.end(), compare);

    for(auto i : v){
        cout << i << '\n';
    }



}