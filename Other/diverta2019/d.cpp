#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned long long N; cin >> N;
    unsigned long long res = 0;
    
    for (long long i = 1; i < N; ++i) {
        long long tmp = N / i - 1;
        if (tmp == 0) break;
        if (N % tmp == N / tmp) {
            res += tmp;
        }
        if (tmp < (N / tmp)) {
            break;
        }
    }
    cout << res << endl;
    return 0;
}
