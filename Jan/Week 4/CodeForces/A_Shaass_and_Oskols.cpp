// Day 23 Problem No 50

// A. Shaass and Oskols => https://codeforces.com/contest/294/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int x[m];
    int y[m];
    for(int i=0;i<m;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<m;i++){
        int w = x[i]-1;
        int b = y[i]-1;
        int l = b;
        int r = (a[w] - b) - 1;
        if(w > 0){
            a[w-1]+= l;
        }
        if(w < n-1){
            a[w+1]+= r;
        }
        a[w] = 0;
    } 
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}