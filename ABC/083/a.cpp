#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int left = a + b, right = c + d;

    if (left < right) {
        cout << "Right" << endl;
    } else if (left > right) {
        cout << "Left" << endl;
    } else {
        cout << "Balanced" << endl;
    }
}