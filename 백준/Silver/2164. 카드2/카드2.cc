#include <bits/stdc++.h>
using namespace std;

int main(void) {
  cin.tie(0);
  cin.sync_with_stdio(0);
  int N;
  cin >> N;
  queue<int> S;
  int i = 1;
  while(N--){
    S.push(i);
    i++;
  }
  int j = 0;
  while(S.size() != 1){
    S.pop();
    j = S.front();
    S.push(j);
    S.pop();
  }
  cout << S.back();
}
