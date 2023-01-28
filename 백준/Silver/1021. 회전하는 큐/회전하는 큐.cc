#include <bits/stdc++.h>
using namespace std;

int main(void) {
  deque<int> DQ;
  int N, M;
  cin >> N >> M;
  for(int i = 1; i <= N; i++) {
    DQ.push_back(i);
  }
  int count = 0;
  while(M--){
    int a;
    int a_index;
    cin >> a;
    for(int i = 0; i < N; i++){
      if(DQ[i] == a){
        a_index = i;
        break;
      }
    }

    if(a_index > DQ.size() - a_index){
      while(true){
        if(DQ.front() == a){
          DQ.pop_front();
          break;
        }
        int x = DQ.back();
        DQ.push_front(x);
        DQ.pop_back();
        count++;
      }
    }
    else {
      while(true){
        if(DQ.front() == a){
          DQ.pop_front();
          break;
        }
        int x = DQ.front();
        DQ.push_back(x);
        DQ.pop_front();
        count++;
      }
    }
  }
  cout << count;
}

