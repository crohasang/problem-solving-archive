#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	vector <int> v;
	vector <int> v2;
	cin >> n >> m;


	while (n--) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.rbegin(), v.rend());

	for (auto it1 = v.begin(); it1 != v.end() - 2; it1++) {
		for (auto it2 = v.begin(); it2 != v.end() - 1; it2++) {
			for (auto it3 = v.begin(); it3 != v.end(); it3++) {
				if (it1 != it2 && it1 != it3 && it2 != it3 && (*it1) + (*it2) + (*it3) <= m) {
					v2.push_back((*it1) + (*it2) + (*it3));
				}
			}
		}
	}

	sort(v2.begin(), v2.end());
	cout << *(v2.end() - 1);


}