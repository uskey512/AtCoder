#include <iostream>
#include <string>

using namespace std;

unsigned long long getXorFromZero(unsigned long long n) {
    if (n % 2) {
        return (n + 1) / 2 % 2;
    } else {
        return n ^ ((n / 2 % 2) ? 1 : 0);
    }
}

int main() {
    unsigned long long i, j; cin >> i >> j;
    cout << (getXorFromZero(i - 1) ^ getXorFromZero(j)) << endl;
}