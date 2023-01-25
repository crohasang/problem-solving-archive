#include <bits/stdc++.h>
using namespace std;

int N,K;
int len = 0;

int pre[5001];
int nxt[5001];

vector<int> v;

int main(void) {
 ios::sync_with_stdio(0);
 cin.tie(0);
 cin >> N >> K;

 for(int i =1; i <=N; ++i){
  if (i == 1){
    pre[i] = N;
  } else {
    pre[i] = i - 1;
  }
  
  if(i == N) {
    nxt[i] = 1;
  } else {
    nxt[i] = i + 1;
  }
  ++len;
 }

 int i = 1;
 for(int cur = 1; len != 0; cur = nxt[cur]) {

  if(i == K) {
    pre[nxt[cur]] = pre[cur];
    nxt[pre[cur]] = nxt[cur];
    v.push_back(cur);
    i = 1;
    --len;
  } else ++i;
 }

 cout << "<";
 for(size_t i = 0; i < v.size(); ++i) {
  cout << v[i];
  if( i != v.size() -1) {
    cout << ", ";
  }
 }
 cout << ">";
}
