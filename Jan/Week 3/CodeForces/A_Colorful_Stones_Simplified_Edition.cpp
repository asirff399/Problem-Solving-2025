// Day 21 Problem No 46

// A. Colorful Stones (Simplified Edition) => https://codeforces.com/contest/265/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,ins;
    cin>>s>>ins;
    int cnt = 0;
    for(char c:ins){
        if(s[cnt] == c){
            cnt++;
        }
    }
    cout<<cnt+1;
    return 0;
}