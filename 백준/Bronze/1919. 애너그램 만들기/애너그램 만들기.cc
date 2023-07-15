#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector <char> v1;
	vector <char> v2;
	string word1;
	string word2;
	int cnt = 0;

	// 단어 두 개 입력
	cin >> word1;
	cin >> word2;

	// 벡터에 알파벳 입력
	for (int i = 0; i < word1.length(); i++) {
		v1.push_back(word1[i]);
	}

	for (int i = 0; i < word2.length(); i++) {
		v2.push_back(word2[i]);
	}


	// v1의 첫글자부터 v2를 순회하면서 같은 알파벳이 있는지 찾는다.
	for (auto it1 = v1.begin(); it1 != v1.end(); it1++) {
		for (auto it2 = v2.begin(); it2 != v2.end(); it2++) {
			if (*(it1) == *(it2)) { // 만약 같은 알파벳을 찾으면
				cnt++;
				it2 = v2.erase(it2);
				break;
			}
		}
	}

	cout << v1.size() - cnt + v2.size();

}