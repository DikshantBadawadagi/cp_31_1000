#include <iostream>
#include <string>
using namespace std;

int min_moves_to_regular(const string &s) {
    int balance = 0;
    int min_balance = 0;

    for (char c : s) {
        if (c == '(')
            ++balance;
        else
            --balance;

        min_balance = min(min_balance, balance);
    }

    return -min_balance; // number of misplaced ')' at the start
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        cout << min_moves_to_regular(s) << '\n';
    }

    return 0;
}
