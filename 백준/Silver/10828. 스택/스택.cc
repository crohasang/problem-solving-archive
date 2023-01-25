#include <bits/stdc++.h>
using namespace std;


int main(void) {
  int N;
  cin >> N;
  stack<int> S;
  for(int i=0; i < N; i++){
    string a;
    cin >> a;
    if(a == "push"){
      int X;
      cin >> X;
      S.push(X);
    }
    else if (a == "pop"){
      if(S.empty() == true){
        cout << -1 << "\n";
      }
      else {
        cout << S.top() << "\n";
        S.pop();
      }
  
    }
    else if (a == "size"){
      cout << S.size() << "\n";
    }
    else if (a == "empty"){
      if(S.empty() == true){
        cout << 1 << "\n";
      }
      else {
        cout << 0 << "\n";
      }

    }
    else if (a == "top") {
      if(S.empty() == true){
        cout << -1 << "\n";
      }
      else {
        cout << S.top() << "\n";
      }
    }
  }
}