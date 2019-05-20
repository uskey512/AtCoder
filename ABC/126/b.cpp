#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s; cin >> s;
    int a = (s[0] - '0') * 10 + s[1] - '0';
    int b = (s[2] - '0') * 10 + s[3] - '0';

    string res = "";
    if (0 < a && a <= 12) {
        if (0 < b && b <= 12) {
            res = "AMBIGUOUS";
        } else {
            res = "MMYY";
        }
    } else {
        if (0 < b && b <= 12) {
            res = "YYMM";
        } else {
            res = "NA";
        }
    }

    cout << res << endl;
}