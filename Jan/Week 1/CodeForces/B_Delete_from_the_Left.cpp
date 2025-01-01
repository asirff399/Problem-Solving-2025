// Day 1 Problem No 2
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin>>s>>t;
    int cnt=0;
    int n = s.size()-1;
    int m = t.size()-1;
    while(n >= 0 && m >= 0 && s[n]==t[m]){
        cnt++;
        n--;
        m--;
    }
    int ans = (s.size()-cnt)+(t.size()-cnt);
    cout<<ans;

    return 0;
}
