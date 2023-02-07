#include <bits/stdc++.h>
using namespace std;

void func1(int a, int b, int n){
    if(n == 1){
        cout << a << ' ' << b << '\n';
        return;
    }
    func1(a, 6-a-b, n-1);
    cout << a << ' ' << b << '\n';
    func1(6-a-b, b , n-1);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    cout << (1<<k) -1 << '\n';
    func1(1,3,k);

}