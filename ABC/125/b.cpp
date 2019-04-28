#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> c(n), v(n), rv(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i = 0; i < n; ++i) cin >> c[i];
    for (int i = 0; i < n; ++i) rv[i] = v[i] - c[i];

    sort(rv.begin(), rv.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (0 < rv[i]) {
            sum += rv[i];
        } else {
            break;
        }
    }

    cout << sum << endl;
}
