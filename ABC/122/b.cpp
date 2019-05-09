#include <iostream>
#include <string>

using namespace std;

int main() {
    string s; cin >> s;
    string allow = "ACGT";

    int count = 0;
    int res   = 0;
    for (int i = 0; i < s.size(); ++i) {
        bool isContinue = false;
        for (int j = 0; j < 4; ++j) {
            if (s[i] == allow[j]) {
                isContinue = true;
                break;
            }
        }

        if (isContinue) {
            ++count;
            res = max(res, count);
        } else {
            count = 0;
        }
    }

    cout << res << endl;
}