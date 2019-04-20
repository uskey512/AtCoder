#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, tmp; cin >> n;
    vector<int> num;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        num.push_back(tmp);
    }

    int o;
    while (true) {
        for (int i = 0; i < n; ++i) {
            if (num[i] % 2) {
                cout << o << endl;
                return 0;
            }
            num[i] /= 2;
        }
        o++;
    }
}