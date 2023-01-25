#include <bits/stdc++.h>
using namespace std;

int main(void) {
  cin.tie(0);
  cin.sync_with_stdio(0);
  int K;
  cin >> K;
  queue<int> S;
  while(K--){
    string a;
    cin >> a;
    if(a == "push"){
      int b;
      cin >> b;
      S.push(b);
    }
    else if(a == "pop") {
      if(S.empty()){
        cout << -1 << "\n";
      }
      else{
        cout << S.front() << "\n";
        S.pop();
      }
      
    }
    else if(a == "size") {
      cout << S.size() << "\n";
    }
    else if(a == "empty"){
      if(S.empty()){
        cout << 1 << "\n";
      }
      else {
        cout << 0 << "\n";
      }
    }
    else if(a == "front"){
      if(!S.empty()){
        cout << S.front() << "\n";
      }
      else {
        cout << -1 << "\n";
      }
    }
    else if(a == "back"){
      if(!S.empty()){
        cout << S.back() << "\n";
      }
      else {
        cout << -1 << "\n";
      }
    }
  }
}

