#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string input;
    cin >> input;
    stack<char> s;
    int count = 0;
    int temp = 1;
    bool impossible = false;

    for(int i = 0; i < input.length(); i++){
      if(input[i] == '('){
        temp = temp*2;
        s.push(input[i]);
      }
      else if(input[i] == '['){
        temp = temp*3;
        s.push(input[i]);
      }
      
      else if(input[i] == ')' && (s.empty() || s.top() != '(')){
        impossible = true;
        break;
      }
      else if(input[i] == ']' && (s.empty() || s.top() != '[')){
        impossible = true;
        break;
      }
      else if (input[i] == ')'){
        if(input[i-1] == '('){
          count = count + temp;
        }
        s.pop();
        temp = temp / 2;
      }
      else if(input[i] == ']'){
        if(input[i-1] == '['){
          count = count + temp;
        }
        s.pop();
        temp = temp / 3;
      }
    }

      if(impossible || s.empty() == false){
        cout << 0 << "\n";
      }
      else {
        cout << count << "\n";
      }
      return 0;
}

