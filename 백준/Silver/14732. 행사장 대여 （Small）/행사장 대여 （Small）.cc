#include <bits/stdc++.h>
using namespace std;
int area[501][501] = { 0, };
int main() {
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				area[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < 500; i++) {
		for (int j = 0; j < 500; j++) {
			if (area[i][j] == 1) {
				cnt++;
			}
		}
	}

	cout << cnt;
}