#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main() {
	int n, k;
	int min = 999999999;
	int cnt = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	while (k!=0) {
		for (auto it = v.begin(); it != v.end(); it++) {
			int a = k - *it;
			if (a < min && a >= 0) {
				min = a;
			}
		}
		k = min;
		cnt++;
	}
	cout << cnt;
	
}
