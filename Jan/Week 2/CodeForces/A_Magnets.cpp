//  Day 12 Problem No 25

// A. Magnets => https://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i] != a[i-1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}