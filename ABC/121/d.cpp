#include <iostream>
#include <string>

using namespace std;

int bit[64];

void addBitCount(unsigned long long t) {
    bit[0] += ((t - 1) / 2 + 1) % 2;
    for (unsigned long long k = 63; 0 < k; --k) {
        unsigned long long m = (1ULL << k);
        if (t & m) { 
            bit[k] += ((t - m) + 1) % 2;
            t %= m;
        }
    }
}

void minusBitCount(unsigned long long t) {
    bit[0] -= ((t - 1) / 2 + 1) % 2;
    for (unsigned long long k = 63; 0 < k; --k) {
        unsigned long long m = (1ULL << k);
        if (t & m) { 
            bit[k] -= ((t - m) + 1) % 2;
            t %= m;
        }
    }
}

int main() {
    unsigned long long i, j; cin >> i >> j;
    if (i == j) {
        cout << i << endl;
        return 0;
    }
    addBitCount(i - 1);
    minusBitCount(j);

    unsigned long long res = 0;
    for (int i = 0; i < 64; ++i) {
        if (bit[i] % 2) {
            res |= (1ULL<<i);
        }
    }

    cout << res << endl;
}