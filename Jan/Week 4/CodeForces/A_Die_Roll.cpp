// Day 22 Problem No 48

// A. Die Roll => https://codeforces.com/contest/9/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    for(int i=y;i>1;i--){
        if(x%i == 0 && y%i == 0){
            x /= i;
            y /= i;
        }
    }
    cout<<y<<"/"<<x;
    return 0;
}