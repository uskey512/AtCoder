#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    bool hasY = false;
    for (int i = 0; i < n; ++i)  {
        char a; cin >> a;
        if (a == 'Y') hasY = true;
    }

    cout << (hasY ? "Four" : "Three") << endl;    
}