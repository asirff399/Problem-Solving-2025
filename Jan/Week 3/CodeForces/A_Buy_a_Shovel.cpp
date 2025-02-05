// Day 19 Problem No 42

// A. Buy a Shovel => https://codeforces.com/contest/732/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,r;
    cin>>k>>r;
    for(int i=1;i<=10;i++){
        int x = i*k;
        if(x%10 == 0 || x%10 == r){
            cout<<i;
            return 0;
        }
    }
    return 0;
}