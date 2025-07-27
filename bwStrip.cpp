#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int w_count = 0;

        // Initial count of 'W' in the first window
        for (int i = 0; i < k; ++i) {
            if (s[i] == 'W') ++w_count;
        }

        int min_w = w_count;

        // Slide the window
        for (int i = k; i < n; ++i) {
            if (s[i - k] == 'W') --w_count;
            if (s[i] == 'W') ++w_count;
            min_w = min(min_w, w_count);
        }

        cout << min_w << '\n';
    }

    return 0;
}
