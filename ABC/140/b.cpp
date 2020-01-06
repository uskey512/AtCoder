#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n), c(n-1);
    for (int i = 0; i <   n; ++i) cin >> a[i];
    for (int i = 0; i <   n; ++i) cin >> b[i];
    for (int i = 0; i < n-1; ++i) cin >> c[i];

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum +=  b[a[i] - 1];
        if (i != 0 && (a[i-1] + 1) == a[i]) {
            sum += c[a[i - 1] - 1];
        }
    }

    cout << sum << endl;
}
