// Week 5 Day 35 Problem 78

// A. Mahmoud and Longest Uncommon Subsequence => https://codeforces.com/contest/766/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    if(a==b) cout<<-1;
    if(a!=b){
        int ans = max(a.length(),b.length());
        cout<<ans;
    }
    return 0;
}