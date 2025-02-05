// Day 30 Problem No 66

// A. Team Olympiad => https://codeforces.com/contest/490/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> p, m, pe;
    for(int i=1;i<=n;i++){
        int v;
        cin>>v;
        if(v == 1) p.push_back(i);
        else if (v == 2) m.push_back(i);
        else if (v == 3) pe.push_back(i);
    }
    int mn = min({(int)p.size(),(int)m.size(),(int)pe.size()});

    cout<<mn<<endl;
    for(int i=0;i<mn;i++){
        cout<<p[i]<<" "<<m[i]<<" "<<pe[i]<<endl;
    }


    return 0;
}