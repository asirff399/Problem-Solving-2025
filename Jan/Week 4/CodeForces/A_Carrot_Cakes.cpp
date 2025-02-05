// Day 25 Problem No 55

// A. Carrot Cakes => https://codeforces.com/contest/799/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int ov1time = ((n+k-1)/k )*t;
    int before2nd = d/t *k;
    if(before2nd >= n){
        cout<<"NO";
    }else{
        if(d+t < ov1time){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}