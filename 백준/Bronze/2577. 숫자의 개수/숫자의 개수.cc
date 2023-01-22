
#include <bits/stdc++.h>
using namespace std;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int numbers[10] = {};
  int A,B,C;
  cin >> A >> B >> C;
  int D = A*B*C;

  string s = to_string(D);

  for(auto a : s){
    numbers[a-'0']++;
  }

  for(auto a: numbers){
    cout << a << "\n";
  }

  return 0;

}