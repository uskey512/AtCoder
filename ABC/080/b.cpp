#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    int tmp = n;
    int sum = 0;
    while (tmp) {
        sum += tmp % 10;
        tmp /= 10;
    }

    cout << (n % sum == 0 ? "Yes" : "No") << endl;
}