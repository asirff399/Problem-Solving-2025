// Day 2 Problem No 4

// G. Palindrome Array => https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    int r=n-1;
    while(l < r){
        if(a[l]==a[r]){
            l++;
            r--;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    
    return 0;
}