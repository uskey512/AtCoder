#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (((a < c && c < b) || (b < c && c < a))? "Yes" : "No") << endl;
}
