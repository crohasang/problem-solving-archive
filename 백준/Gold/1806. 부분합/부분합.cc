#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, s;
	cin >> n >> s;
	
	for (int i = 0; i < n; i++) { // 입력
		cin >> arr[i];
	}

	int en = 0;
	int len = 0x7fffffff;
	int total = arr[0];
	for (int st = 0; st < n; st++) {
		while (en < n && total < s) {
			en++; // en을 한 칸 오른쪽 옆으로 옮긴다
			if (en != n) {
				total += arr[en]; // arr[en]을 total에 더해준다
			}
		}

		if (en == n) {
			break;
		}

		
		if (total >= s) {
			if (en - st < len) {
				len = en - st + 1;
			}
		}

		total -= arr[st];
	}

	if (len == 0x7fffffff) {
		len = 0;
	}
	cout << len;
}