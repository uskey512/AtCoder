#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, tmp; 
    cin >> n;
    vector<int> s;
    for (int i = 0; i < n; ++i){
        cin >> tmp;
        s.push_back(tmp);
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    cout << s.size() << endl;
}