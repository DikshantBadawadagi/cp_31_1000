#include<iostream>
#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<long long,long long>&a, pair<long long,long long>&b){
    if(a.first == b.first)return a.second < b.second;
    return a.first > b.first;
}

int main() {
    long long t;
    cin >> t;
    while(t--){
        long long n,k;
        cin>> n >> k;
        vector<pair<long long,long long>>nums;
        for(long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            temp = temp%k;
            if(temp == 0)temp = k;
            nums.push_back({temp, i+1});
        }

        sort(nums.begin(),nums.end(),comp);
        for(auto it : nums){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}