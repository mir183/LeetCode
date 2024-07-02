#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    int titleToNumber(string s) {
        int n=s.size();
        int ans=0;
        for(auto c:s){
            int d=c-'A'+1;
            ans=ans*26+d;
        }
        return ans;
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}