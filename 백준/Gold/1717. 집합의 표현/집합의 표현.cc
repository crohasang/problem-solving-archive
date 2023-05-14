#include <bits/stdc++.h>
using namespace std;
int parent[1000001];
int n, m;

int find(int i) {
	if (parent[i] == i) {
		return i;
	}
	parent[i] = find(parent[i]);
	return parent[i];
}

void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x != y) {
		parent[y] = x;
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		parent[i] = i;
	}
	for (int i = 0; i < m; i++) {
		int x, a, b;
		cin >> x >> a >> b;
		if (x == 0) {
			merge(a, b);
		}
		else if(x == 1) {
			if (find(a) == find(b)) {
				cout << "yes" << '\n';
			}
			else {
				cout << "no" << '\n';
			}
		}
	}
}
