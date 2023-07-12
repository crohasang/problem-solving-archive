#include <bits/stdc++.h>
using namespace std;


int main() {
	int a, b;
	vector <int> v;
	int max, min;
	int cnt = 1;
	
	cin >> a >> b;

	int x = 2;

	while (1) {

		if (a % x == 0 && b % x == 0) { // 공약수를 찾았으면
			a = a / x;
			b = b / x;
			v.push_back(x);
			x = 2;
		}
		else {
			x++;
		}

		if (x > a && x > b) {
			break;
		}
	}
		

	for (auto it = v.begin(); it != v.end(); it++) {
		cnt = cnt * (*(it));
	}

	min = cnt;
	max = cnt * a * b;

	cout << min << '\n';
	cout << max;

		
}