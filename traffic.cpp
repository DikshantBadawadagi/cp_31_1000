#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        if (c == 'g') {
            cout << 0 << '\n';
            continue;
        }

        string doubled = s + s;
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            if (doubled[i] == c) {
                int j = i + 1;
                while (doubled[j] != 'g') ++j;
                ans = max(ans, j - i);
                i = j - 1;  // Skip all c's between current c and next g
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
