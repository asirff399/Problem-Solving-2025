// Week 5 -> Day 32 -> Problem 72

// 10110 Light, more light => https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051

#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n;
    while(cin>>n && n!= 0){
        unsigned int root = sqrt(n);
        if(root*root == n) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
