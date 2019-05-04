#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int A[5], k;
    for (int i = 0; i < 5; ++i) cin >> A[i];
    cin >> k;

    bool res = true;
    for (int i = 4; 0 < i; --i) {
        for (int j = i - 1; 0 <= j; --j) {
            if (k < (A[i] - A[j])) {
                res = false;
                break;
            }
        }
    }

    cout << (res ? "Yay!" : ":(") << endl;
}
