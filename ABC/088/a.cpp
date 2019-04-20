#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,n;
    cin >> n;
    cin >> a;

    cout << ((n % 500) <= a ? "Yes" : "No") << endl;
}

