#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;

	cin >> n;

	while (n--) {
		string x;
		cin >> x;

		list<char> a;
		list<char>::iterator iter = a.begin();

		for (int i = 0; i < x.length(); i++) {
			if (x[i] == '<') {
				if (iter != a.begin() && !(a.empty())) {
					iter--;
				}
			}
			else if (x[i] == '>') {
				if (iter != a.end() && !(a.empty())) {
					iter++;
				}
			}
			else if (x[i] == '-') {
				if (iter != a.begin()) {
					iter--;
					iter = a.erase(iter);
				}
			}
			else {
				a.insert(iter, x[i]);
			}
		}

		for (auto it : a) {
			cout << it;
		}
		cout << '\n';
	}
}