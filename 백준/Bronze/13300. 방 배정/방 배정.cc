
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, K;
  cin >> N >> K;
  int array[2][7] = {0};
  for(int i = 0; i < N; i++){
    int S,Y;
    cin >> S >> Y;
    array[S][Y]++;
  }

  double count = 0;

  for(int i = 0; i < 2; i++) {
    for(int j = 1; j < 7; j++) {
      count += ceil(double(array[i][j]) / double(K));
      
    }
  }

  cout << count;

}