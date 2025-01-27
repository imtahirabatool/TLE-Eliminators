#include <iostream>
#include <set>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b, kx, ky, qx, qy;
        cin >> a >> b >> kx >> ky >> qx >> qy;

        set<pair<long long, long long>> ans;
        long long kingMovesX[8] = { b, a, -a, -b, -b, -a, a, b };
        long long kingMovesY[8] = { a, b, b, a, -a, -b, -b, -a };

        for (int i = 0; i < 8; i++) {
            long long newX = kx + kingMovesX[i];
            long long newY = ky + kingMovesY[i];

            for (int j = 0; j < 8; j++) {
                long long queenX = newX + kingMovesX[j];
                long long queenY = newY + kingMovesY[j];

                if (queenX == qx && queenY == qy) {
                    ans.insert(make_pair(newX, newY));
                }
            }
        }
        cout << ans.size() << endl;
    }
    return 0;
}