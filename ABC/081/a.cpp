#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string n;
    cin >> n;
    int count;

    for (int i = 0; i < n.size(); ++i){
        if (n[i] == '1') {
            ++count;
        }
    }

    cout << count << endl;
}