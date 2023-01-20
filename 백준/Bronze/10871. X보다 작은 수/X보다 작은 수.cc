#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int X;

    cin >> N >> X;

    for(int i=0; i < N; i++){
        int a;
        cin >> a;
        if(a<X){
            cout << a << " ";
        }
    }
};