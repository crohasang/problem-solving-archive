
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num, a, target;
  cin >> num;
  vector<int> v;
  for (int i = 0; i < num; i++) {
    cin >> a;
    v.push_back(a);
  }
  cin >> target;
  int count = 0;

  for(auto element: v){
    if(element == target){
      count++;
    }
  }
  cout << count;
  return 0;
}