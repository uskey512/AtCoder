#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int A, B; cin >> A >> B;

    int count = 0;
    for (int i = A; i <= B; ++i) {
        string a = to_string(i);
        if (a[0] == a[4] && a[1] == a[3]) ++count;
    }

    cout << count << endl;
}