#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> seen;
        bool duplicate_found = false;

        for (int i = 0; i < n; ++i) {
            int b;
            cin >> b;
            if (seen.count(b)) {
                duplicate_found = true;
            }
            seen.insert(b);
        }

        cout << (duplicate_found ? "YES" : "NO") << '\n';
    }
    return 0;
}
