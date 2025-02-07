// Week 6 Day 36 Problem 80

// A. Snacktower => https://codeforces.com/problemset/problem/767/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> present(n + 1, false); 
    int expected = n; 

    for (int i = 0; i < n; i++) {
        int snack;
        cin >> snack;
        present[snack] = true;
        while (expected > 0 && present[expected]) {
            cout << expected << " ";
            expected--;
        }
        cout << endl;
    }
    return 0;
}
