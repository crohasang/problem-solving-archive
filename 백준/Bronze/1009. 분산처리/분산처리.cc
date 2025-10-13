#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;

        int answer = 1;
        
        while(b--) {
            answer = (answer * a) % 10;
        }

        if (answer == 0) {
            answer = 10;
        }
        
        cout << answer << "\n";
    }
    
}