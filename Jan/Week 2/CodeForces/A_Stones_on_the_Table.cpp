//  Day 14 Problem No 29

// A. Stones on the Table => https://codeforces.com/contest/266/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<char> a;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        a.push_back(c);
    }
    int cnt=0;
    for(int i=0;i<a.size()-1;){
        if(a[i] == a[i+1]){
            a.erase(a.begin()+i);
            cnt++;
        }else{
            i++;
        }
    }
    cout<<cnt;

    return 0;
}