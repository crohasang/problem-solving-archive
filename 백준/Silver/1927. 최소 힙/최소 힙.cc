#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq; // 최소 힙


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n; // 연산의 개수 n
	cin >> n;

	while (n--) {
		int x;
		cin >> x;
		
		if (x == 0) { // x가 0이라면
			if (pq.empty()) { // 배열이 비어있을 경우
				cout << 0 << '\n'; // 0 출력
			}
			else {
				cout << pq.top() << '\n'; // 배열에서 가장 작은 값 출력
				pq.pop(); // 그리고 그 값을 배열에서 제거
			}
			
		}

		else { // x가 0이 아니라면
			pq.push(x); // 배열에 x 삽입
		}
	}
}