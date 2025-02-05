// Day 15 Problem No 31

// A. Police Recruits => https://codeforces.com/contest/427/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int police=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>> x;
        if(x==-1){
            if(police > 0){
                police--;
            }else{
                cnt++;
            }
        }else{
            police += x;
        }
    }
    cout<<cnt;
    return 0;
}
