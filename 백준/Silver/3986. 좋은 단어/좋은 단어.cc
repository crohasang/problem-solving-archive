#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int cnt = 0;
	cin >> n;


	while (n--) {

		stack <char> s;
		string a;
		cin >> a;

		for (int i = 0; i < a.length(); i++) {
			if (s.empty()) {
				s.push(a[i]);
			}
			else if(s.top() == a[i]){
				s.pop();
			}
			else {
				s.push(a[i]);
			}
		}

		if (s.empty()) {
			cnt++;
		}
	}

	cout << cnt;
}