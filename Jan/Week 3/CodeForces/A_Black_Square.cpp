//  Day 16 Problem No 34

// A. Black Square => https://codeforces.com/contest/431/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int cnt=0;
    for(size_t i=0;i<s.length();i++){
        int x = s[i] - '1';
        cnt+=a[x];
    }
    cout<<cnt;
    return 0;
}