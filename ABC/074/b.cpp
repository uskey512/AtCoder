#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, K; cin >> N >> K;

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        int tmp; cin >> tmp;
        sum = sum + min(tmp, K - tmp) * 2;
    }
    cout << sum << endl;
}