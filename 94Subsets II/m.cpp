#include<bits/stdc++.h>
using namespace std;

// Paste here

// Paste here
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>&v) {
        vector<vector<int>> result;
        vector<int> subset;
        sort(v.begin(), v.end());
        backtrack(0,v,subset,result);
        return result;
    }
    void backtrack(int i,vector<int>&v, vector<int>&subset, vector<vector<int>>&result) {
        if(i==v.size()){
            result.push_back(subset);
            return;
        }
        subset.push_back(v[i]);
        backtrack(i+1,v,subset,result);
        subset.pop_back();
        while(i+1<v.size() && v[i]==v[i+1]) i++;
        backtrack(i+1,v,subset,result);
    }
};




signed main() {
    Solution s;
    
    return 0;
}