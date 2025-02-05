//  Day 17 Problem No 38

// A. Night at the Museum => https://codeforces.com/contest/731/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>> str;
    char curr = 'a';
    int cnt = 0;
    for(char c:str){
        int dis = min(abs(curr - c),26-abs(curr - c));
        cnt+= dis; 
        curr = c;
    }
    cout<<cnt;
    return 0;
}