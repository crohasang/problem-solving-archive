#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int least = 0x7fffffff; // 차이의 최솟값을 저장할 변수

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) { // 입력
		cin >> arr[i];
	}

	sort(arr, arr+n); // 오름차순 정렬

	int en = 0;
	for (int st = 0; st < n; st++) {

		while (en < n && arr[en] - arr[st] < m) {
			en++;
		}
	
		if (en == n) {
			break;
		}

		int bet = arr[en] - arr[st];


		if (bet < least) {
			least = bet;
		}
		
	}

	cout << least;

}