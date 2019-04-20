#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    sort(s1.begin(), s1.end());
    
    cin >> s2;
    sort(s2.begin(), s2.end());
    reverse(s2.begin(), s2.end());

    cout << ((s1 < s2) ? "Yes" : "No") << endl;
}