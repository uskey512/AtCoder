#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int getSumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int res = 0;
    for (int i = 1; i <= n; ++i){
        int dsum = getSumOfDigits(i);
        if (a <= dsum && dsum <= b) {
            res += i;
        }
    }

    cout << res << endl;
}
