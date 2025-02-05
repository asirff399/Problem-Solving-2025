//  Day 11 Problem No 23

// A. Word => https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    int cntup = 0;
    int cntlo = 0;
    for(char s:str){
        if(s > 96){
            cntlo++;
        }else{
            cntup++;
        }
    }
    if(cntup < cntlo){
        for(int i=0;i<str.length();i++){
            if(str[i] <= 90 ){
                str[i]+=32;
            }
        }
    }else if(cntup==cntlo){
        for(int i=0;i<str.length();i++){
            if(str[i] <= 90 ){
                str[i]+=32;
            }
        }
    }
    else{
        for(int i=0;i<str.length();i++){
            if(str[i] >= 97 ){
                str[i]-=32;
            }
        }
    }
    cout<<str;
    return 0;
}