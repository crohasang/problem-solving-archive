#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;


// 고장난 버튼이 있는지 판단하는 함수
bool isBroken(int x, const bool broken[10]) {
    if (x == 0) {
        return broken[0];
    }

    while (x > 0) {
        if (broken[x % 10] == true) {
            return true;
        }
        x = x / 10;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;

    // 일단 처음 answer는 100에서 N까지 화살표로 누른 값
    int answer = abs(100 - N);

    bool broken[10] = {false};

    // 고장난 버튼을 배열에 넣기 (5번이 틀리면, arr[5] = true)
    for(int i = 0; i < M; i++) {
        int j;
        cin >> j;
        broken[j] = true;
    }


    // 그냥 0부터 1000000까지 완벽 탐색
    for(int i = 0; i <= 1000000; i++) {
        bool isBrokenResult = isBroken(i, broken);

        // 고장난 버튼이 있으면 그냥 패스
        if(isBrokenResult) {
            continue;
        }

        int iLength = to_string(i).length();

        answer = min(answer, iLength + abs(N - i));
    }

    cout << answer;
    return 0;
}
