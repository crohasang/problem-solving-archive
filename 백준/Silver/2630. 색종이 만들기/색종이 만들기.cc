#include <bits/stdc++.h>
using namespace std;
int bluecnt = 0;
int whitecnt = 0;

vector <vector<int>> v;

void find(int x, int y, int n) {
	bool blue = true;
	bool white = true;

	
	for (int i = x; i < x+n; i++) {
		for (int j = y; j < y+n; j++) {
			if (v[i][j] != 1) {
				blue = false;
			}
			else {
				white = false;
			}
		}
	}

	if (blue == true) {
		bluecnt++;
		return;
	}
	else if (white == true) {
		whitecnt++;
		return;
	}
	
	if (n > 1) {
		find(x, y, n / 2);
		find(x, y + n / 2, n / 2);
		find(x + n / 2, y, n / 2);
		find(x + n / 2, y + n / 2, n / 2);
	}
	else {
		return;
	}
	

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;

	// vector<vector <int>> v(n, vector<int>(n, 0)); <- 이렇게 하면 틀린다..
	v = vector<vector<int>>(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			v[i][j] = x;
		}
	}

	bluecnt = 0;
	whitecnt = 0;
	
	find(0, 0, n);

	cout << whitecnt << "\n";
	cout << bluecnt;
}