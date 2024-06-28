#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        while(n>0){
            n--;
            int cd=n%26;
            n=n/26;
            ans.push_back(cd+65);
        }
        reverse(ans.begin(),ans.end());
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