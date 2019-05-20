#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> r(M + 1, 0);

    for (int i = 0; i < N; ++i) {
        int K; cin >> K;
        for (int j = 0; j < K; ++j) {
            int tmp; 
            cin >> tmp;
            r[tmp]++;
        }
    }
    int res = 0;
    for (int i = 1; i <= M; ++i) {
        if (r[i]==N) ++res;
    }
    cout << res << endl;
}