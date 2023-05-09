#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main() {
	ios::sync_with_stdio(0);
	cin.tie();
	int n;
	int ans = 0;
	int max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	int size = v.size();

	for (auto it = v.begin(); it != v.end(); it++) {
		if ((*it) * size > max) {
			max = (*it) * size;
		}
		size--;
	}
	cout << max;

}

