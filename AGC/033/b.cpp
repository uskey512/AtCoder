#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int H, W, N; cin >> H >> W >> N;
    int sr, sc; cin >> sr >> sc;
    string S, T; cin >> S >> T;

    bool isSave = true;

    // 右に押し出す
    int x = sc;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'R') x++;
        if (W < x) isSave = false;
        if (T[i] == 'L' && 1 < x) x--;
    }
    if (W < x) isSave = false;

    // 左に押し出す
    x = sc;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'L') x--;
        if (x < 1) isSave = false;
        if (T[i] == 'R' && x < W) x++;
    }
    if (x < 1) isSave = false;
    
    // 上に押し出す
    int y = sr;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'U') y--;
        if (y < 1) isSave = false;
        if (T[i] == 'D' && y < H) y++;
    }
    if (y < 1) isSave = false;

    // 下に押し出す
    y = sr;
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'D') y++;
        if (H < y) isSave = false;
        if (T[i] == 'U' && 1 < y) y--;
    }
    if (H < y) isSave = false;

    cout << (isSave ? "YES" : "NO") << endl;
}
