// Week 5 -> Day 31 -> Problem 70

// A. New Password => https://codeforces.com/contest/770/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    string password = "";
    for(int i=0;i<n;i++){
        password += char('a'+ i%k);
    }
    cout<<password<<endl;
    return 0;
}