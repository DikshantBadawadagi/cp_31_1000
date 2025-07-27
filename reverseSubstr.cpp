#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    // Check if already sorted (non-decreasing)
    if (is_sorted(s.begin(), s.end())) {
        cout << "NO\n";
        return 0;
    }

    // Find first position where order breaks
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] > s[i + 1]) {
            // Try reversing from i to j, where j is longest decreasing sequence
            int j = i + 1;
            while (j + 1 < n && s[j] > s[j + 1]) ++j;

            cout << "YES\n";
            cout << i + 1 << " " << j + 1 << "\n"; // 1-based index
            return 0;
        }
    }

    // Just in case (shouldn't be needed due to earlier sorted check)
    cout << "NO\n";
}
