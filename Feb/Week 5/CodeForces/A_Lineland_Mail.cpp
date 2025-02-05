// Week 5 Day 34 Problem 76

// A. Lineland Mail => https://codeforces.com/contest/567/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    int total = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total= abs(total+a[i]);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int mx,mn;
        if(i == 0){
            mn = abs(a[i] - a[i+1]);
        }else if(i == n-1){
            mn = abs(a[i] - a[i-1]);
        }else{
            mn = min(abs(a[i] - a[i+1]),abs(a[i] - a[i-1]));
        }
        mx = max(abs(a[i] - a[0]),abs(a[i] - a[n-1]));
        
        cout<<mn<<" "<<mx<<endl;
    }

    return 0;
}