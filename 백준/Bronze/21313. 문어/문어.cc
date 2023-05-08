#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (n % 2 == 0) {
			if (i % 2 == 0) {
				cout << 1 << ' ';
			}
			else {
				cout << 2 << ' ';
			}
		}
		else {
			if (i != n - 1) {
				if (i % 2 == 0) {
					cout << 1 << ' ';
				}
				else {
					cout << 2 << ' ';
				}
			}
			else {
				cout << 3;
			}
		}
	}
		
}