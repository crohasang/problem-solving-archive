#include <bits/stdc++.h>
using namespace std;

int n, m;
vector <int> v;
int arr[10];
bool isused[10];

void func(int k) { // 현재 k개까지 수를 택했음.
    if (k == m) { // m개를 모두 택했으면
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' '; // arr에 기록해둔 수를 출력
        cout << '\n';
        return;
    }

    for (auto it = v.begin(); it != v.end(); it++) { // 재귀를 사용
        arr[k] = *it; 
        func(k + 1);
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end()); // 오름차순으로 정렬
    v.erase(unique(v.begin(), v.end()), v.end()); // 중복된 수 제거

    func(0);
}
