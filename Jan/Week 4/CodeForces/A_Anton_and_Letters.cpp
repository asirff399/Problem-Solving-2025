// Day 26 Problem No 57

// A. Anton and Letters => https://codeforces.com/contest/443/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    set<char> cset;
    for(char c:s){
        if(islower(c)){
            cset.insert(c);
        }
    }
    cout<<cset.size();

    return 0;
}