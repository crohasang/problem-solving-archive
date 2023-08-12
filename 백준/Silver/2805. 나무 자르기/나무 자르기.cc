#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <ll> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n, m;
	ll ans = 0;
	cin >> n >> m; // n = 나무의 수, m = 가져가려고 하는 나무의 길이

	while (n--) { // 나무의 높이 입력
		ll x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end()); // 오름차순 정렬

	ll st = 1;
	ll en = v.back();


	while (st <= en) {
		
		ll cnt = 0;
		ll mid = (st + en + 1) / 2;
		for (auto it = v.begin(); it != v.end(); it++) {
			ll isit = *it - mid; // 나무의 높이에서 절단기의 높이를 뺀다.
			if (isit > 0) { // 0보다 크다면
				cnt += isit; // 더해준다
			}
		}
		if (cnt >= m) { // 자른 나무의 합이 m과 같거나 크다면
			ans = mid;
			st = mid + 1; // 절단기의 높이를 높여준다.
		}
		else { // 자른 나무의 합이 m보다 작다면
			en = mid - 1; // 절단기의 높이를 낮춰준다.
		}
	}

	cout << ans;

}