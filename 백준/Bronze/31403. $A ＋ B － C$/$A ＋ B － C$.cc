#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    string a_string, b_string;
    cin >> a >> b >> c;
    a_string = to_string(a);
    b_string = to_string(b);

    string ab_string = a_string + b_string;
    int ab_int = stoi(ab_string);

    cout << a + b - c << endl;
    cout << ab_int - c;
    
}