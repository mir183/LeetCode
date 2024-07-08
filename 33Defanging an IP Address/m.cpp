#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here




class Solution {
public:
    string defangIPaddr(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                ans.push_back('[');
                ans+='.';
                ans.push_back(']');
            }else{
                ans+=s[i];
            }
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