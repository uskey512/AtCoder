#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, A;
    cin >> N >> A;

    bool isError = false;
    for (int i = 0; i < N; ++i) {
        string op; int v;
        cin >> op >> v;
        if (op == "+") A += v;
        if (op == "-") A -= v;
        if (op == "*") A *= v;
        if (op == "/") {
            if (v == 0) {
                isError = true;
                cout << "error" << endl;
                break;
            }
            A /= v;
        }
        printf("%d:%d\n", i+1, A);
    }
}