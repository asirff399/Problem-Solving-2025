// Day 7 Problem No 14

// A. Beautiful Matrix => https://codeforces.com/contest/263/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int mat[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
        }
    }
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]==1){
                a=i;
                b=j;
                break;
            }
        }
    }
    int ans = abs(2 - a)+abs(2-b);
    cout<<ans;
    return 0;
}