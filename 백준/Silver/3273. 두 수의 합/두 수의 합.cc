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
  sort(v.begin(), v.end());
  int left = 0, right = num-1, count = 0;

  while(true) {
    if(left >= right){
      break;
    }
    int sum = v[left] + v[right];
    if (sum == target) {
      count++;
      left++;
      right--;
    }
    else if (sum < target){
      left++;
    }
    else {
      right--;
    }
  }
  cout << count;
  return 0;
}