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
        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.rbegin(), a.rend()); // just descending sort

        for (int x : a) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
