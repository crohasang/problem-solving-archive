#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main() {
	int L, P, V;
	int quotient = 0;
	int remainder = 0;
	int sum = 0;
	int cnt = 0;
	while (true) {
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0) {
			break;
		}
		else {
			quotient = V / P;
			remainder = V % P;
			if (remainder > L) {
				sum = L * quotient + L;
			}
			else {
				sum = L * quotient + remainder;
			}
			v.push_back(sum);
			
		}
	}
	
	for (auto it = v.begin(); it != v.end(); it++) {
		cnt++;
		cout << "Case " << cnt << ": " << *(it) << "\n";
	}
}