#include <iostream>
#include <string>
#include <queue>

using namespace std;

const int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
const int dy[8] = {0, 1, 0, -1, 1, -1, -1, 1};

int main() {
    int H,W; cin >> H >> W;
    vector<vector<int>> map(H, vector<int>(W, -1));
    deque<pair<int,int>> dq;

    for (int i = 0; i < H; ++i) {
        string s; cin >> s;
        for (int j = 0; j < W; ++j) {
            if (s[j] == '#') {
                dq.push_back(pair<int,int>(j,i));
                map[i][j] = 0;
            }
        }
    }

    long unsigned int idx = 0;
    pair<int,int> pos;
    do {
        pos = dq.at(idx);
        for (int i = 0; i < 4; ++i) {
            int x = pos.first  + dx[i];
            int y = pos.second + dy[i];
            if (x < 0 || W <= x || y < 0 || H <= y) continue;
            if (map[y][x] == -1) {
                dq.push_back(pair<int,int>(x,y));
                map[y][x] = map[pos.second][pos.first] + 1;
            }
        }
    } while (++idx < dq.size());
    pos = dq.back();

    cout << map[pos.second][pos.first] << endl;
}
