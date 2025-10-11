#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<pair<int,int>> stack;

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int height;
        cin >> height;

        while(!stack.empty()) {
            if(height < stack.top().second) {
                cout << stack.top().first << " ";
                break;
            }
            stack.pop();
        }
        
        if(stack.empty()) {
            cout << "0" << " ";
            
        }

        stack.push(make_pair(i+1, height));
        
    }
    

    
}