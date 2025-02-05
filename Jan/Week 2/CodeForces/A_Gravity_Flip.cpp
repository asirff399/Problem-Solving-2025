// Day 8 Problem No 16

// A. Gravity Flip => https://codeforces.com/contest/405/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n-1;
    sort(a,a+n);
    while(l>r){
        if(l < r){
            int tmp = l;
            l=r;
            r=tmp;
        }
        l++;
        r--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}