#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int longestCommonSubstring(const string &a, const string &b) {
    int n = a.size(), m = b.size();
    int lcs = 0;
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
                lcs = max(lcs, dp[i][j]);
            }
        }
    }
    return lcs;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int lcs = longestCommonSubstring(a, b);
        int ops = (a.size() - lcs) + (b.size() - lcs);
        cout << ops << "\n";
    }
    return 0;
}
