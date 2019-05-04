#include <bits/stdc++.h>

using namespace std;

int main() {
    int p; cin >> p;
    if (p == 1) {
        int price,n; cin >> price >> n;
        cout << price * n << endl;
    }
    if (p == 2) {
        string text; cin >> text;
        int price,n; cin >> price >> n;
        cout << text + "!" << endl;
        cout << price * n << endl;
    }
}