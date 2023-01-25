#include <bits/stdc++.h>
using namespace std;

int main(void) {


  int M;
  cin >> M;

  for(int i=0; i<M; i++){
  string writing;
  cin >> writing;
  list<char> L;
  list<char>::iterator t = L.begin();
  
  for (auto a : writing) {
    
    if(a == '<'){
      if(t != L.begin()){
        t--;
      }
    }
    else if(a == '>') {
      if(t != L.end()) {
        t++;
      }
    }
    else if(a == '-') {
      if(t != L.begin()) {
        t--;
        t = L.erase(t);
      }
    }
    else {
      L.insert(t, a);
    }
  }

  for(auto c : L) {
    cout << c;
  }
  cout << '\n';
  

  }

}
