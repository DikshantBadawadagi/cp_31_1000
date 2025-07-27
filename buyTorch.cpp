#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int64_t ceil_div(int64_t a, int64_t b) {
    return (a + b - 1) / b;
}

void run_case() {
    int64_t X, Y, K;
    cin >> X >> Y >> K;

    // Total number of sticks needed = K * Y (to trade) + K (to craft torches)
    // Each trade gives (X - 1) sticks because we give 1 coal
    int64_t trades = ceil_div(K * Y + K - 1, X - 1);
    trades += K;

    cout << trades << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests--) {
        run_case();
    }

    return 0;
}
