// Day 27 Problem No 59

// A. Way Too Long Words => http://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.length() > 10){
            char f = s.front();
            char l = s.back();
            cout<<f<<s.length()-2<<l<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}