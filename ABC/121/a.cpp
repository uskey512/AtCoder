#include <iostream>
#include <string>

using namespace std;

int main() {
    int H, W, h, w;
    cin >> H >> W >> h >> w;
    cout << (H - h) * (W - w) << endl;
}