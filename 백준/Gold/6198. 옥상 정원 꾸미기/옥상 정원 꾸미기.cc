#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    long long answer = 0;
    stack<int> stack;

    cin >> N;

    for(int i = 0; i < N; i++) {
        int height;
        cin >> height;

        while(!stack.empty()) {
            if(height < stack.top()) {
                answer += stack.size();
                stack.push(height);
                break;
            }
            stack.pop();
        }

        if(stack.empty()) {
            stack.push(height);
        }
    }

    cout << answer;

}