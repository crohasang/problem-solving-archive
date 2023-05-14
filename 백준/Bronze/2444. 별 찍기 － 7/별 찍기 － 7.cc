#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	int line = 1;
	int standard = 2 * n - 1;
	for (int i = 0; i < standard; i++) {
		int star = standard - (2 * abs(n - line));
		for (int i = 0; i < abs(n - line); i++) {
			cout << " ";
		}
		while (star--) {
			cout << "*";
		}
		cout << '\n';
		line++;
	}
}
