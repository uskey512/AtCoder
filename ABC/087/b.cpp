#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a, b, c, sum;
    cin >> a >> b >> c >> sum;
    int count = 0;

    for (int i = 0; i <= a; ++i) {
        for (int j = 0; j <= b; ++j) {
            for (int k = 0; k <= c; ++k) {
                if ((i * 500 + j * 100 + k * 50) == sum) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}