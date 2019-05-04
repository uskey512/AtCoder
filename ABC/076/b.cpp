#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N,K; cin >> N >> K;
    int res = 1;
    for (int i = 0; i < N; ++i) {
        res = (res * 2 < res + K) ? res * 2 : res + K;
    }
    cout << res << endl;
}