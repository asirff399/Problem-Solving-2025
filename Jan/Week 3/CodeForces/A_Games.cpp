// Day 18 Problem No 40

// A. Games => https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<pair<int,int>> unifrom(t);
    for(int i=0;i<t;i++){
        cin>>unifrom[i].first>>unifrom[i].second;
    }
    int cnt=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(i!=j){
                if(unifrom[i].first == unifrom[j].second){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;

    return 0;
}