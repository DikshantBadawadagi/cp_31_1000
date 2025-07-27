#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMul(int a,int d){
    int left = 0;int right = d+1;
    while(right - left > 1){
        int mid = (left + right) >> 1;
        if(a*mid > d){
            right = mid;
        }
        else{
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int n,d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans =0,res=0;
    for(int i=n-1;i>=0;i--){
        
        // int j=1;
        // while(arr[i]*j <= d)j++;
        int j = getMul(arr[i],d);
        if(ans + j > n)break;
        ans += j;
        res++;
    }
    cout <<res << endl;
}