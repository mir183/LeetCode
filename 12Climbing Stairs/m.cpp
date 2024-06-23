#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        vector<int>v(n+1);
        v[0]=v[1]=1;

        for(int i=2;i<=n;i++){
            v[i]=v[i-1]+v[i-2];
        }


    return v.back();
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}