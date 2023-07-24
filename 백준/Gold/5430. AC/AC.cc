#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	deque <int> d;
	stack <int> s;
	string p;
	string ans;
	string strtemp = "";
	int n = 0;
	bool isreversed = false;
	int t;
	bool iserror = false;

	cin >> t; // 테스트 케이스의 개수

	while (t--) { // 테스트 케이스 횟수 동안 루프

		isreversed = false;
		iserror = false;

		if (!d.empty()) {
			d.clear(); // 덱 초기화
		}

		cin >> p; // 수행할 함수
		cin >> n; // 배열에 들어있는 수의 개수
		cin >> ans; // 배열에 들어있는 정수

		if (n == 0) {
			for (int i = 0; i < p.length(); i++) {
				if (p[i] == 'D') {
					iserror = true;
					cout << "error" << "\n";
					break;
				}
			}

			if (iserror == false) {
				cout << "[]" << "\n";
			}

			continue;
		}


		for (int i = 0; i < ans.length(); i++) { // ans에 숫자들만을 추출해서 덱에 push
			if (ans[i] != ',' && ans[i] != '[' && ans[i] != ']') {
				strtemp += ans[i];
			}

			else if (ans[i] == ',' || ans[i] == ']') {
				d.push_back(stoi(strtemp));
				strtemp = "";
			}
		}

		for (int i = 0; i < p.length(); i++) { // 수행할 함수를 읽기 위한 loop
			if (p[i] == 'R') { // 만약 R이라면
				isreversed = !isreversed;
			}
			else if (p[i] == 'D') { // 만약 D라면

				if (d.empty()) { // 덱이 비어있다면
					cout << "error" << '\n';
					iserror = true;
					break;
				}

				else if (!d.empty() && isreversed == false) { // 뒤집어져있지 않을 때
					d.pop_front();
				}
				else if (!d.empty() && isreversed == true) { // 뒤집어져 있을 때
					d.pop_back();
				}
			}
		}

		if (iserror == false && d.empty()) {
			cout << "[]" << "\n";
		}
		
		else if (iserror == false && !d.empty() && isreversed == false) {
			cout << "[";
			for (int i = 0; i < d.size(); i++) {
				cout << d[i];
				if (i != d.size() - 1) {
					cout << ',';
				}
				else {
					cout << ']' << '\n';
				}
			}
		}
		else if (iserror == false && !d.empty() && isreversed == true) {
			cout << "[";
			for (int i = d.size() - 1; i >= 0; i--) {
				cout << d[i];
				
				if (i != 0) {
					cout << ',';
				}
				else {
					cout << ']' << '\n';
				}
			}

		}
	}
}