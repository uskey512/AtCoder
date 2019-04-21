#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string s; cin >> s;
    vector<int> n(s.size());

    for (int i = 0; i < s.size(); ++i) {
        n[i] = s[i] == '1' ? 1 : 0;
    }

    int ope = 1e7;
    int count = 0;
    for (int i = 0; i < n.size(); ++i){
        if (i % 2 == n[i]) {
            ++count;
        }
    }
    ope = min(count, ope);

    count = 0;
    for (int i = 0; i < n.size(); ++i){
        if ((i + 1) % 2 == n[i]) {
            ++count;
        }
    }
    ope = min(count, ope);

    cout << ope <<  endl;
}
