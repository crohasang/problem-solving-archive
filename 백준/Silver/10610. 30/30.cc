#include <bits/stdc++.h>
using namespace std;
vector <int> v;
signed main() {
	string n;
	int sum = 0;
	bool zero = false;
	cin >> n;

	sort(n.begin(), n.end(), greater<>());

	for (int i = 0; i < n.size(); i++) {
		v.push_back(n[i] - '0');
	}
	
	for (auto it = v.begin(); it != v.end(); it++) {
		sum += *it;
		if (*it == 0) {
			zero = true;
		}
	}
	if (zero == false) {
		cout << -1;
		return 0;
	}
	if (sum % 3 != 0) {
		cout << -1;
		return 0;
	}

	cout << n;
}
