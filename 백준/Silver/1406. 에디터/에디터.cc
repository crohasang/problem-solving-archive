#include <bits/stdc++.h>
using namespace std;

int main(void) {
string writing;
cin >> writing;
list<char> L;
for (auto a : writing) {
  L.push_back(a);
}
list<char>::iterator t = L.end();

int M;
cin >> M;

for(int i=0; i<M; i++){
  char order;
  cin >> order;
  if(order == 'L') {
    if(t != L.begin()){
      t--;
    }
  }
  else if(order == 'D'){
    if(t != L.end()){
      t++;
    }
  }
  else if(order == 'B'){
    if(t != L.begin()){
      t--;
      t = L.erase(t);
    }
    else if(t == L.begin()){
      
    }
  }
  else if(order == 'P'){
    char newchar;
    cin >> newchar;
    L.insert(t, newchar);
  }
}

for(auto c : L) {
  cout << c;
}

}