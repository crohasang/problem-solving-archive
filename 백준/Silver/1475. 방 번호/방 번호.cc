
#include <iostream>
#include <string>
using namespace std;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int numbers[10] = {0};
  int A;
  cin >> A;

  string s = to_string(A);

  for(char a : s){
    numbers[a-'0'] = numbers[a-'0'] + 1;
  }

  
  int max = 0;
  for(int i = 0; i<10; i++){
    if(i != 6 && i != 9){
      if(numbers[i] > max){
        max = numbers[i];
      }
    }
  }

    int sixnine = (numbers[6] + numbers[9] + 1) / 2;
    if(max >= sixnine) {
      cout << max;
    }
    else if(max < sixnine) {
      cout << sixnine;
    }


}