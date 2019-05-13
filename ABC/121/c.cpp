#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<pair<int, int>> p(N);
    int a, b;
    for (int i = 0; i < N; ++i) {
        cin >> a >> b;
        p[i] = pair<int, int>(a, b);
    }

    sort(p.begin(), p.end());
    long long cost = 0;
    for (int i = 0, cnt = 0; cnt != M; ++i) {
        long long bc = min(p[i].second, M-cnt);
        cnt   += bc;
        cost  += bc * p[i].first;
    }

    cout << cost << endl;

}