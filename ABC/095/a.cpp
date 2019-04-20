#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main() {
    string input;
    cin >> input;
 
    int cost = 700;
    for (int i = 0; i < input.size(); ++i){
        if (input[i] == 'o') { 
            cost += 100;
        }
    }
 
    cout << cost << endl;
}