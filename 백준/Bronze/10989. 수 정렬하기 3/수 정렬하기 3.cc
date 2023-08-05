#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll arr[10005];


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        arr[x] = arr[x] + 1;
    }

    for (ll i = 1; i <= 10000; i++) {
        if (arr[i] != 0) {
            for (ll j = 0; j < arr[i]; j++) {
                cout << i << "\n";
            }
        }
    }
}
