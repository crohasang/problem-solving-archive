#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head,tail;

void push(int x) {
  dat[tail++] = x;
}

void pop() {
  head++;
}

int front() {
  return dat[head];
}

int back() {
  return dat[tail-1];
}


int main(void) {
  int K;
  cin >> K;
  while(K--){
    string a;
    cin >> a;
    if(a == "push"){
      int b;
      cin >> b;
      push(b);
    }
    else if(a == "pop") {
      if(tail==head){
        cout << -1 << "\n";
      }
      else{
        cout << front() << "\n";
        pop();
      }
      
    }
    else if(a == "size") {
      cout << tail-head << "\n";
    }
    else if(a == "empty"){
      if(tail==head){
        cout << 1 << "\n";
      }
      else {
        cout << 0 << "\n";
      }
    }
    else if(a == "front"){
      if(tail!=head){
        cout << front() << "\n";
      }
      else {
        cout << -1 << "\n";
      }
    }
    else if(a == "back"){
      if(tail!=head){
        cout << back() << "\n";
      }
      else {
        cout << -1 << "\n";
      }
    }
  }
}

