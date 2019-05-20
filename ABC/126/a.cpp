#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, K; string S; cin >> N >> K >> S;
    S[K-1] += 0x20;
    cout << S << endl;
}