#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt = 0; // 회의 개수

struct meet { // 시작 시간과 종료시간을 입력받는 구조체
    ll st;
    ll en;
};

ll cmp(meet a, meet b) { // 종료 시간이 빠른 순서대로 정렬
    if (a.en != b.en) {
        return a.en < b.en;
    }
    else { // 종료 시간이 같다면 시작 시간이 빠른 순서대로 정렬
        return a.st < b.st;
    }
    
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;

    struct meet* mt = new struct meet[n]; // 구조체 동적할당

    for (ll i = 0; i < n; i++) { // 시작 시간과 종료 시간 입력
        cin >> mt[i].st;
        cin >> mt[i].en;
    }

    sort(mt, mt + n, cmp); // 종료 시간이 빠른 순서대로 정렬


    int endtime = 0;
    for (ll i = 0; i < n; i++) {
        if (endtime <= mt[i].st) { // 시작 시간이 자신의 종료 시간보다 느리거나 같다면
            endtime = mt[i].en; // 종료 시간 갱신
            cnt++; // 회의 개수 추가
        }
    }
    

    cout << cnt; // 출력

    delete[] mt; // 동적할당 해제


}