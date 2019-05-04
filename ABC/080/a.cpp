#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, a, b; cin >> n >> a >> b;
    cout << ((n * a < b) ? n * a : b) << endl;
}