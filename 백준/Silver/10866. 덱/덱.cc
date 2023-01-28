#include <bits/stdc++.h>
using namespace std;

int main(void) {
  deque<int> DQ;
  int n;
  cin >> n;
  while(n--){
    string writing;
    cin >> writing;
    if(writing == "push_back"){
      int a;
      cin >> a;
      DQ.push_back(a);
    }
    else if(writing == "push_front"){
      int a;
      cin >> a;
      DQ.push_front(a);
    }
    else if(writing == "pop_front"){
      if(DQ.empty()){
        cout << -1 << "\n";
      }
      else{
        cout << DQ.front() << "\n";
        DQ.pop_front();
        }
    }
      
    else if(writing == "pop_back"){
      if(DQ.empty()) {
        cout << -1 << "\n";
      }
      else {
        cout << DQ.back() << "\n";
        DQ.pop_back();
      }
    }
    else if(writing == "size"){
      cout << DQ.size() << "\n";
    }
    else if(writing == "empty"){
      if(DQ.empty()){
        cout << 1 << "\n";
      }
      else{
        cout << 0 << "\n";
      }
    }
    else if(writing == "front"){
      if(DQ.empty()){
        cout << -1 << "\n";
      }
      else {
        cout << DQ.front() << "\n";
      }
    }
    else if(writing == "back"){
      if(DQ.empty()){
        cout << -1 << "\n";
      }
      else {
        cout << DQ.back() << "\n";
      }
    }
  }
}

