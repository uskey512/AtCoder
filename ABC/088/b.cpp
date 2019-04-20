#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    vector<int> cards;
    for (int i = 0; i < n; ++i){
        cin >> tmp;
        cards.push_back(tmp);
    }

    sort(cards.begin(), cards.end(), greater<int>());
    int a, b;
    a = b = 0;
    for (int i = 0; i < cards.size(); ++i){
        if (i % 2 == 0){
            a += cards[i];
        } else {
            b += cards[i];
        }
    }

    cout << (a - b) << endl;
}