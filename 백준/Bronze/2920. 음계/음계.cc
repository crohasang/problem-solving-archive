#include <bits/stdc++.h>
using namespace std;

int main(void) {
  cin.tie(0);
  cin.sync_with_stdio(0);
  int N;
  cin >> N;
  bool asc = true;
  bool des = true;
  if(N == 1){
    int count = 1;
    for(int i = 2; i <=8; i++){
      count = count + 1;
      cin >> N;
      if(N != count){
        asc = false;
      }
    }
    if(asc == true) {
      cout << "ascending";
    }
    else {
      cout << "mixed";
    }
  }
  
  else if(N == 8){
    int count = 8;
    for(int i = 7; i >= 1; i--){
      count = count - 1;
      cin >> N;
      if(N != count){
        des = false;
      }
    }
    if(des == true) {
      cout << "descending";
    }
    else {
      cout << "mixed";
    }
  }
  
  else {
    cout << "mixed";
  }

  return 0;
}
