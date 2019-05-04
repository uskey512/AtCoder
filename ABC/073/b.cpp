#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n,sum = 0; cin >> n;
    for (int i = 0; i < n; ++i) {
        int a,b; cin >> a >> b;
        sum += (b - a + 1);
    }
    cout << sum << endl;
}