#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int c, min = 10, sum = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> c;
        sum += (c % 10 == 0) ? c : (c / 10 * 10 + 10);
        if ((c % 10) < min && c % 10 != 0) {
            min = c % 10;
        }
    }
    cout << ((min == 0) ? sum : (sum - 10 + min)) << endl;
}
