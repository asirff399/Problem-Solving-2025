// Day 3 Problem No 6

// A. Vanya and Fence => https://codeforces.com/contest/677/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(h >= a[i]){
            cnt++;
        }else{
            cnt+=2;
        }
    }
    cout<<cnt;
    return 0;
}