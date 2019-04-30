#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<int> left(n + 1, 0), right(n + 1, 0);

    left[1] = a[0];
    for (int i = 2; i <= n; ++i) left[i] = gcd(left[i - 1], a[i - 1]);
    for (int i = n - 1; 0 <= i; --i) right[i] = gcd(right[i + 1], a[i]);

    int res = 0;
    for (int i = 0; i < n; ++i) {
        int tmp = gcd(left[i], right[i+1]);
        if (res < tmp) res = tmp;
    }

    cout << res << endl;
}
