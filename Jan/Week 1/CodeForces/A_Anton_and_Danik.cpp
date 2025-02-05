// Day 4 Problem No 7

// A. Anton and Danik => https://codeforces.com/contest/734/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cntA=0,cntD=0;
    for(int i=0;i<n;i++){
        if(a[i]=='A'){
            cntA++;
        }else{
            cntD++;
        }
    }
    if(cntA > cntD){
        cout<<"Anton";
    }else if(cntA < cntD){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}