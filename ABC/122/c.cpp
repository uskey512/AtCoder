#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, Q; string S; cin >> N >> Q >> S;
    vector<int> n(N);

    int count = 0;
    for (int i = 1; i < N; ++i) {
        if (S[i - 1] == 'A' && S[i] == 'C') {
            ++count;
        }
        n[i] = count;
    }

    int l, r;
    for (int i = 0; i < Q; ++i) {
        cin >> l >> r;
        cout << n[r-1] - n[l-1] << endl;
    }   
}