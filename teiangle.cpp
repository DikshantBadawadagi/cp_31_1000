#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long w, h;
        cin >> w >> h;

        long long maxBase = 0;

        // Bottom side (y = 0)
        int k;
        cin >> k;
        vector<long long> bottom(k);
        for (int i = 0; i < k; ++i) cin >> bottom[i];
        maxBase = max(maxBase, bottom.back() - bottom.front());

        // Top side (y = h)
        cin >> k;
        vector<long long> top(k);
        for (int i = 0; i < k; ++i) cin >> top[i];
        maxBase = max(maxBase, top.back() - top.front());

        long long area1 = maxBase * h;

        long long maxHeight = 0;

        // Left side (x = 0)
        cin >> k;
        vector<long long> left(k);
        for (int i = 0; i < k; ++i) cin >> left[i];
        maxHeight = max(maxHeight, left.back() - left.front());

        // Right side (x = w)
        cin >> k;
        vector<long long> right(k);
        for (int i = 0; i < k; ++i) cin >> right[i];
        maxHeight = max(maxHeight, right.back() - right.front());

        long long area2 = maxHeight * w;

        cout << max(area1, area2) << "\n";
    }

    return 0;
}
