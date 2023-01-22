
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;
  bool can;

  for(int i = 0; i < N; i++){
    can = true;
    int arr[26];
    string text1, text2;
    cin >> text1 >> text2;
    fill(arr, arr+26 , 0);
    for(int j = 0; j < text1.length(); j++){
      arr[text1[j]-'a']++;
    }
    for(int j = 0; j < text2.length(); j++){
      arr[text2[j]-'a']--;
    }
    for(int j = 0; j < 26; j++) {
      if(arr[j] != 0) {
        can = false;
      }
    }

    if(can == true) {
      cout << "Possible" << "\n";
    }
    else {
      cout << "Impossible" << "\n";
    }

  }
  
}