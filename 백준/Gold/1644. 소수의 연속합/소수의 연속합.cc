#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
int anscnt = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;

	// 에라토스테네스의 체를 이용해서 소수를 판별
	vector<bool> v(n + 1);
	v[1] = true;

	for (int i = 2; i <= sqrt(n); i++) {
		if (v[i]) {
			continue;
		}

		for (int j = i + i; j <= n; j += i) {
			v[j] = true;
		}
	}

	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		if (!v[i]) {
			arr[cnt] = i;
			cnt++;
		}
	}

	int en = 0;
	int total = arr[0]; // 수의 합을 저장하는 변수

	for (int st = 0; st < n; st++) {
		while (en < cnt && total < n) {
			en++; // en을 한 칸 오른쪽 옆으로 옮긴다
			if (total == n) {
				anscnt++;
			}
			if (en != cnt) {
				total += arr[en]; // arr[en]을 total에 더해준다
			}
		}
		if (en == cnt) {
			break;
		}

		if (total == n) {
			anscnt++;
		}

		total -= arr[st];
	}
	cout << anscnt;
}