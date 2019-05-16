#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B, K; cin >> A >> B >> K;
    for (int i = min(A, B), cnt = 0; 1 <= i; --i) {
        if (A % i == 0 && B % i == 0) {
            ++cnt;
            if (cnt == K) {
                cout << i << endl;
                break;
            }
        }
    }
}