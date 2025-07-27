#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        long long low = a[0] - x;
        long long high = a[0] + x;
        int changes = 0;

        for (int i = 1; i < n; ++i) {
            long long curr_low = a[i] - x;
            long long curr_high = a[i] + x;

            // Update the valid range by intersecting
            low = max(low, curr_low);
            high = min(high, curr_high);

            // If no valid v exists, we need to change
            if (low > high) {
                ++changes;
                low = curr_low;
                high = curr_high;
            }
        }

        cout << changes << '\n';
    }
    return 0;
}
