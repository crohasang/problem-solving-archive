#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> stack;
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int push_number;
            cin >> push_number;
            stack.push(push_number);
        }
        else if (command == "top") {
            if(stack.empty()) {
                cout << "-1" << "\n";
            }
            else {
                cout << stack.top() << "\n";
            }
        }
        else if (command == "size") {
            cout << stack.size() << "\n";
        }
        else if (command == "empty") {
            if(stack.empty()) {
                cout << "1" << "\n";
            }
            else {
                cout << "0" << "\n";
            }
        }
        else if (command == "pop") {
            if (stack.empty()) {
                cout << "-1" << "\n";
            }
            else {
                cout << stack.top() << "\n";
                stack.pop();
            }
        }
    }
}