#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B, C; cin >> A >> B >>C;
    cout << min(C, B / A) << endl;
}