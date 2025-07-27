#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt[2] = {0, 0};

        // Count 0s and 1s
        for (char c : s) {
            cnt[c - '0']++;
        }

        int len = s.length();
        for (int i = 0; i <= len; ++i) {
            if (i == len || cnt[1 - (s[i] - '0')] == 0) {
                cout << len - i << endl;
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }
    return 0;
}
