#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, y; 
    cin >> n >> y;

    int tt, ft, ot;
    tt = ft = ot = -1;

    for (int a = 0; a <= n; ++a){
        for (int b = 0; a + b <= n; ++b) {
            int c = n - (a + b);
            int total = a * 10000 + b * 5000 + c * 1000;
            if (total == y){
                tt = a;
                ft = b;
                ot = c;
            }
        }
    }
    cout << tt << " " << ft << " " << ot << endl;
}