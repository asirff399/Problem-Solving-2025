// Day 24 Problem No 53

// A. Juicer => https://codeforces.com/contest/709/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,b,d;
    cin>>n>>b>>d;
    int a[n];
    int x=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] <= b){
            x+=a[i];
            if(x>d){
                cnt++;
                x=0;
            }
        }
    }
    cout<<cnt;

    return 0;
}