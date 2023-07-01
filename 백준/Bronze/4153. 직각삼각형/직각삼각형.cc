#include <bits/stdc++.h>
using namespace std;


int main() {

	while(1) {
		int arr[3] = { 1,1,1 };
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		sort(arr, arr + 3);
		if ((arr[0] * arr[0]) + (arr[1] * arr[1]) == arr[2] * arr[2]){
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}
}