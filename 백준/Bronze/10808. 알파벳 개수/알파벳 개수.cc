#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  for(char a = 'a'; a <= 'z'; a++){
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == a) {
            count++;
        }
    }
    cout << count << ' ';
  }
}