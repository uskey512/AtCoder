#include <iostream>
#include <string>

using namespace std;

int st[4];

int main() {
    int N;cin >> N;
    string s;
    int res = 0;
    for (int i = 0; i < N; ++i) {
        cin >> s;
        for (int j = 1; j < s.length(); ++j) {
            if (s[j-1] == 'A' && s[j] == 'B') ++res;
        }
        if (s.front() == 'B' && s.back() == 'A'){ 
            ++st[0];
        } else if (s.front() == 'B') {
            ++st[1];
        } else if (s.back() == 'A') {
            ++st[2];
        }
    }

    if (st[0] != 0 && st[2] != 0) {
        --st[2]; ++res;
    }
    if (st[0] != 0 && st[1] != 0) {
        --st[1]; ++res;
    }
    if (2 <= st[0]) {
        res += (st[0] - 1);
    }
    res += min(st[1], st[2]);

    cout << res << endl;
}