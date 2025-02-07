// Week 6 Day 38 Problem 82

// A. Oath of the Night's Watch => https://codeforces.com/contest/768/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt = 0;
    sort(a.begin(),a.end());
    for(int i=1;i<n-1;i++){
        if(a[i] > a[0] && a[i] < a[n-1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}