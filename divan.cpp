#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> freq(n); // {ai, index}
        for (int i = 0; i < n; ++i) {
            cin >> freq[i].first;
            freq[i].second = i + 1; // building index (1-based)
        }

        // Sort by frequency descending
        sort(freq.rbegin(), freq.rend());

        vector<int> positions(n + 1); // positions[0] = x0 (headquarters)
        vector<int> assigned(n + 1);  // final coordinates
        positions[0] = 0;

        int coord = 1;
        long long total_time = 0;

        for (int i = 0; i < n; ++i) {
            int idx = freq[i].second;
            int visits = freq[i].first;

            int pos = (i % 2 == 0) ? coord : -coord;
            if (i % 2 == 1) coord++; // only increase every full pair

            positions[idx] = pos;
            total_time += 2LL * abs(pos) * visits;
        }

        cout << total_time << "\n";
        for (int i = 0; i <= n; ++i) {
            cout << positions[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
