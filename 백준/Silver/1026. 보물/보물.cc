#include <bits/stdc++.h>
using namespace std;
vector <int> v1;
vector <int> v2;

int main() {
	int n;
	int sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v2.push_back(a);
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater<int>());

	for (int i = 0; i < n; i++) {
		sum += v1[i] * v2[i];
	}

	cout << sum;

}