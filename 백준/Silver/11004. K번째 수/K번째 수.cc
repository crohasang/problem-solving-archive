#include <iostream>
#include <algorithm>


using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    int arr[N];

    
    
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    };

    sort(arr, arr + N);


    cout << arr[K-1];
    

}