#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[10];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int add = 0; // 현재 자릿수에 해당하는 숫자를 계산하기 위해 만든 변수
	cin >> n;

	for (int i = 1; n != 0; i *= 10) {
		int now = n % 10; // n을 10으로 나눈 나머지
		n /= 10; // n을 10으로 나누어준다.

		arr[0] = arr[0] - i; // 처음에 계산할 때 0은 포함되지 않으므로 빼준다.
		// ex) 처음에 수가 0,1,2,3,4,5,6,7.... 이 때 0은 빼줘야 되니까


		// 현재 자릿수에 해당하는 숫자보다 작은 수들
		// 일의 자리를 계산한다고 가정해보자.
		// 만약 숫자가 123이라면 0,1,2는 120, 121, 122로 다른 숫자들보다 한 번 더 세어줘야한다.
		for (int j = 0; j < now; j++) { 
			arr[j] += (n + 1) * i;
		}

		// 현재 자릿수에 해당하는 숫자
		// 십의 자리를 계산한다고 가정해보자.
		// 만약 숫자가 123이라면 2는 120, 121, 122, 123 총 4번 나오므로
		// 다른 숫자와는 다르게 계산해줘야 함을 알 수 있다.
		arr[now] += n * i + 1 + add;

		// 현재 자릿수에 해당하는 숫자보다 큰 수들
		for (int j = now + 1; j <= 9; j++) {
			arr[j] += n * i;
		}

		add += now * i;
	}

	for (int i = 0; i < 10; i++) { // 출력
		cout << arr[i] << " ";
	}
}