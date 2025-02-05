// Day 28 Problem No 61

// A. Free Ice Cream => https://codeforces.com/contest/686/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,d;
    cin>>n>>d;
    char carr[n];
    long long xarr[n];
    long long Ccnt = 0;
    long long Acnt = d;
    for(int i=0;i<n;i++){
        cin>>carr[i]>>xarr[i];
        if(carr[i] == '+'){
            Acnt+=xarr[i];
        }else{
           if(Acnt >= xarr[i]){
                Acnt-=xarr[i];
           }else{
                Ccnt++;
           }
        }
    }
    cout<<Acnt<<" "<<Ccnt;
    return 0;
}