#include<iostream>
#include<vector>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long l = 0, r = 0, ans = 0;
        while(r < n) {
            while(r < n && arr[r] <= q) r++;
            long long len = r - l;
            if(len >= k) {
                long long d = len - k + 1;
                ans += d * (d + 1) / 2;
            }
            r++;
            l = r;
        }
        cout << ans << endl;
    }
}
