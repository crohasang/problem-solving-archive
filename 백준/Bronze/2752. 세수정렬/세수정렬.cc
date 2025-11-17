#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    

    int arr[3];

    for(int i = 0; i < 3; i++) {
        int j;
        cin >> j;
        arr[i] = j;
    }

    sort(arr, arr + 3);

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    
    
}