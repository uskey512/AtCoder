#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
    int N, K; cin >> N >> K;
    double res = 0.0L;

    for (int i = 1; i <= N; ++i) {
        if (K <= i) {
            res += (1.0L / (double)N);
            continue;
        }
        int cnt = 1;
        for (int tmp = 2; tmp * i < K; ++cnt, tmp *= 2);
        res += (1.0L / (double)N / (double)(1 << cnt));
    }

    printf("%.15f\n",res);
}