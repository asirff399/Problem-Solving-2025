// Day 5 Problem No 9

// A. Bear and Big Brother => https://codeforces.com/contest/791/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a <= b){
        a = a*3;
        b = b*2;
        cnt++;
    }
    cout<<cnt<<endl;
    
    return 0;
}