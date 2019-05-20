#include <iostream>
#include <string>

using namespace std;

int main() {
    int K; cin >> K;
    long double sum = 0;
    for (int i = 0; i < K; ++i) {
        long double input; string s;
        cin >> input >> s;
        if (s == "BTC") {
            input *= 380000.0;
        }
        sum += input;
    }

    cout << sum << endl;   
}