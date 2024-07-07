#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int ans=0;
        for(int i=1;i<n;i++){
            ans+=abs(s[i]-s[i-1]);
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