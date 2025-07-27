#include <iostream>
using namespace std;

int count_twos(long long x) {
    int cnt = 0;
    while (x % 2 == 0) {
        x /= 2;
        ++cnt;
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long ra = a, rb = b;
        int xa = 0, xb = 0;

        // Factor out powers of 2
        while (ra % 2 == 0) {
            ra /= 2;
            xa++;
        }
        while (rb % 2 == 0) {
            rb /= 2;
            xb++;
        }

        if (ra != rb) {
            cout << -1 << '\n';
        } else {
            int diff = abs(xa - xb);
            int moves = 0;

            // Use largest steps first (3, then 2, then 1)
            moves += diff / 3;
            diff %= 3;
            moves += diff / 2;
            diff %= 2;
            moves += diff;

            cout << moves << '\n';
        }
    }

    return 0;
}
