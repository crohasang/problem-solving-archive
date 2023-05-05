#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> v;
int main() {
	ll n;
	ll sum = 0;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
	}

	for (auto it1 = v.begin(); it1 != v.end(); it1++) {
		for (auto it2 = v.begin(); it2 != v.end(); it2++) {
			sum += abs(*it2 - *it1);
		}
	}
	cout << sum;
}