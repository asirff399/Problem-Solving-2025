// Week 5 Day 33 Problem 74

// A. Presents => https://codeforces.com/contest/136/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> x(n);
    for(int i=0;i<n;i++){
        x[a[i]-1] = i+1;
    }
    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    return 0;
}