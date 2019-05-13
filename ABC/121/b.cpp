#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, M, C; cin >> N >> M >> C;
    vector<int> B(M);
    int res = 0;
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }
    for (int i = 0; i < N; ++i) {
        int tmp, sum = 0;
        for (int j = 0; j < M; ++j) {
            cin >> tmp;
            sum += B[j] * tmp;
        }
        if (0 < (sum + C)) ++res;
    }
    cout << res << endl;
}