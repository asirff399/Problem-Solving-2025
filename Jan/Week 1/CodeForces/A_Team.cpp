// Day 6 Problem No 12

// A. Team => https://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        int cnt = 0;
        for(int i=0;i<3;i++){
            if(a[i] == 1){
                cnt++;
            }
        }
        if(cnt >= 2){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}