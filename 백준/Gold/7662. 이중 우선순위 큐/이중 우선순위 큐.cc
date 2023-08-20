#include <bits/stdc++.h>
using namespace std;
multiset<int> ms;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t; // 테스트 케이스 t 입력

	while (t--) {
		ms.clear(); // ms 초기화
		int k;
		cin >> k; // 연산할 개수 k 입력
		while (k--) {
			char order; // 연산을 나타내는 문자
			int n;
			cin >> order >> n;

			if (order == 'I') { //order가 I라면
				ms.insert(n); // 삽입한다.
			}

			else if (order == 'D') { // order가 D라면
				
				if (ms.size() != 0) { // ms가 비어있지 않다면
					
					if (n == 1) { // n이 1이라면 최댓값을 삭제해야한다.
						auto iter = ms.end();
						iter--;
						ms.erase(iter);
					}
					else if (n == -1) { // n이 -1이라면 최솟값을 삭제해야한다.
						auto iter = ms.begin();
						ms.erase(iter);
					}
				}
				else {

				}
			}
		}
		if (ms.size() == 0) { // 만약 ms가 비어있다면
			cout << "EMPTY" << "\n"; // EMPTY 출력
		}
		else { // ms가 비어있지않다면
			auto itermax = ms.end();
			itermax--;
			auto itermin = ms.begin();
			cout << *itermax << ' ' << *itermin << "\n";
		}
	}
}