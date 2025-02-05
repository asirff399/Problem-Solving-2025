// Day 29 Problem No 63

// A. Helpful Maths => https://codeforces.com/contest/339/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    stringstream ss(str);
    vector<int> nums;
    int num;
    char c;
    while(ss>>num){
        nums.push_back(num);
        ss>>c;
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i < nums.size()-1){
            cout<<nums[i]<<"+";
        }else{
            cout<<nums[i];
        }
    }
    return 0;
}