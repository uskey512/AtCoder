#include <iostream>
#include <string>

using namespace std;

int main() {
    long long N; cin >> N;
    long long res = 0;
    
    for (long long i = 1; i < N; ++i) {
        // printf("%5d %5d %5d %s\n", i, N % i, N / i, (N%i==N/i?"true":"false"));
        if (N%i == N/i) {
            res += i;
        }
    }
    cout << res << endl;
}