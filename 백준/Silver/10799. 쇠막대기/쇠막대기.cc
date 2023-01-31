#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string input;
    cin >> input;
    stack<int> s;
    int count = 0;

    for(int i = 0; i < input.size(); i++){
      if(input[i] == '('){
        s.push(input[i]);
      }
      else {
        if(input[i-1] == '('){
          s.pop();
          count = count + s.size();
        }
        else{
          s.pop();
          count = count + 1;
        }
      }
    }
    cout << count;
  }  


