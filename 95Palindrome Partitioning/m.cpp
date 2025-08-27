#include<bits/stdc++.h>
using namespace std;

// Paste here

// Paste here
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string>sub;
        vector<vector<string>>ans;
        backtrack(0,s,ans,sub);
        return ans;
    }
    bool isPal(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    void backtrack(int start,string s,vector<vector<string>>&ans,vector<string>&sub){
        if(start==s.size()){
            ans.push_back(sub);
            return;
        }
        for(int i=start;i<s.size();i++){
            if(isPal(s,start,i)){
                sub.push_back(s.substr(start,i-start+1));
                backtrack(i+1,s,ans,sub);
                sub.pop_back();
            }
        }
    }

};





signed main() {
    Solution s;
    
    return 0;
}