#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector <int> v;
	vector <char> result;
	stack <int> s;
	int n;

	cin >> n; // 정수 개수 입력
	int maxx = n;

	while (n--) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int i = 1;
	vector<int>::iterator it = v.begin();


	// 일단 0을 스택에 집어넣는다.
	s.push(0);
	
	while (it != v.end()) {
		if (s.top() < *it) { // top이 현재 수열이 가리키는 값보다 작다면
			s.push(i);
			result.push_back('+');
			i++;
		}
		else if (s.top() == *it) { // top이 현재 수열이 가리키는 값과 같다면
			s.pop();
			result.push_back('-');
			it++;
		}
		else if (s.top() > *it) {
			cout << "NO";
			return 0;
		}
	}
	


	for (auto it2 = result.begin(); it2 != result.end(); it2++) {
		cout << *it2 << '\n';
	}


}