#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> pref(n, 0), suff(n, 0);
        vector<int> alpha(26, 0), alpha2(26, 0);

        // Build prefix
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (alpha[s[i] - 'a'] == 0) {
                cnt++;
                alpha[s[i] - 'a'] = 1;
            }
            pref[i] = cnt;
        }

        // Build suffix
        cnt = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (alpha2[s[i] - 'a'] == 0) {
                cnt++;
                alpha2[s[i] - 'a'] = 1;
            }
            suff[i] = cnt;
        }

        // Compute max f(a) + f(b)
        int ans = 0;
        for (int i = 0; i < n - 1; ++i) {
            ans = max(ans, pref[i] + suff[i + 1]);
        }
        cout << ans << "\n";
    }
    return 0;
}
