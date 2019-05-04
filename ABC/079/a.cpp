#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a; cin >> a;
    int s = a / 1000;
    int h = a % 1000 / 100;
    int j = a % 100 / 10;
    int i = a % 10;

    cout << (h == j && ((h == s) || (j == i)) ? "Yes" : "No") << endl;
}