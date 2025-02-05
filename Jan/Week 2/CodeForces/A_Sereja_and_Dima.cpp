//  Day 13 Problem No 27

// A. Sereja and Dima => https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cntS=0;
    int cntD=0;
    bool trun = true;
    while(!a.empty()){
        if(trun){
            if(a.front() > a.back()){
                cntS+=a.front();
                a.erase(a.begin());
            }else{
                cntS+=a.back();
                a.pop_back();
            }
        }else{
            if(a.front() > a.back()){
                cntD+=a.front();
                a.erase(a.begin());
            }else{
                cntD+=a.back();
                a.pop_back();
            }
        }
        trun = !trun;
    }
    cout<<cntS<<" "<<cntD;
    return 0;
}