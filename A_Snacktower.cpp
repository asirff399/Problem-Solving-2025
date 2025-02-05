// Week 6 Day 36 Problem 80

// A. Snacktower => https://codeforces.com/problemset/problem/767/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> res;
    for(int i=0;i<n;i++){
        res.push_back(a[i]);
        if(a[i]>a[i+1] || i == n-1){
            sort(res.rbegin(),res.rend());
            for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
            res.erase(res.begin(),res.end());
        }
        cout<<endl;
    }
    return 0;
}