#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int K;
  cin >> K;
  stack<int> S;
  while(K--){
    int n;
    cin >> n;
    if(n != 0){
      S.push(n);
    }
    else{
      S.pop();
    }
    
  }
  int sum = 0;
  while(!S.empty()){
    sum += S.top();
    S.pop();
  }
  cout << sum;
}