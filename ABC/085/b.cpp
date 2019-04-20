#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, tmp; 
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i){
        cin >> tmp;
        s.insert(tmp);
    }

    cout << s.size() << endl;
}