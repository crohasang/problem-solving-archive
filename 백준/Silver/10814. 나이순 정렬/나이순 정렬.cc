#include <bits/stdc++.h>
using namespace std;

struct s {
    int age;
    string name;
};

bool compare(const s& s1, const s& s2) {
    return s1.age < s2.age;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    struct s* st = new struct s[n];
 

    for (int i = 0; i < n; i++) {
        cin >> st[i].age;
        cin >> st[i].name;
    }

    stable_sort(st, st + n, compare);

    for (int i = 0; i < n; i++) {
        cout << st[i].age << " " << st[i].name << "\n";
    }
    
    delete[] st;
}
