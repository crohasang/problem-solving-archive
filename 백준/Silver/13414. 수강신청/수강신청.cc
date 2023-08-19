#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> m;

bool cmp(pair<string, int>& a, pair<string, int>& b) {
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int k, len;
	int cnt = 0;

	cin >> k >> len;

	while (len--) {
		cnt++;
		string x;
		cin >> x;
		if (m.find(x) != m.end()) { // 이미 대기열에 들어가 있다면
			m.erase(x);
		}
		
		m[x] = cnt;


	}
	vector<pair<string, int>> v(m.begin(), m.end()); // m을 vector로 변경
	sort(v.begin(), v.end(), cmp);

	int prcnt = 1;
	for (auto it = v.begin(); it != v.end(); it++) {
		if (prcnt <= k) {
			cout << it->first << "\n";
			prcnt++;
		}
		else {
			break;
		}
	}
 }