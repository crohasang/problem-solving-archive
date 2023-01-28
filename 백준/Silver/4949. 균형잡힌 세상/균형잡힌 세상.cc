#include <bits/stdc++.h>
using namespace std;

int main(void) {
  while(true){
    string input;
    getline(cin, input);
    
    if (input == "."){
      break;
    }

    stack<char> s;
    bool isit = true;
    for(int i=0; i<input.length(); i++){
      char c = input[i];

      if(c == '(' || c == '['){
        s.push(c);
      }

      else if(c == ')'){
        if(s.empty() == false && s.top() == '(') {
          s.pop();
        }
        else {
          isit = false;
          break;
        }
      }
      else if(c == ']'){
        if(s.empty() == false && s.top() == '['){
          s.pop();
        }
        else{
          isit = false;
          break;
        }
      }
    }

    if (isit == true && s.empty() == true){
      cout << "yes" << "\n";
    }
    else {
      cout << "no" << "\n";
    }

  }  
}
