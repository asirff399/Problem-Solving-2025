//  Day 10 Problem No 21

// A. Boy or Girl => https://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    set<char> unique_c(str.begin(),str.end());
    int dcnt = unique_c.size();
    
    if(dcnt % 2 == 0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}