#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    int solve(int n){
        int x=0;
        while (n>0)
        {
            int c=n%10;
            x=x+c*c;
            n/=10;
        }
        return x;
        
    }
    bool isHappy(int n) {
        unordered_set<int>st;
        while (n!=1 and !st.count(n))
        {
            st.insert(n);
            n=solve(n);
            
        }
        if(n==1) return true;
        else return false;
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}