#include<bits/stdc++.h>
using namespace std;

// Paste here

// Paste here
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>comb;
        makeComb(candidates,target,0,comb,0,res);
        return res;
    }
    void makeComb(vector<int>candidates,int target, int idx, vector<int>& comb, int total, vector<vector<int>>& res){
        if(total==target){
            res.push_back(comb);
            return;
        }

        if(total>target or idx>=candidates.size()){
            return;
        }
        comb.push_back(candidates[idx]);
        makeComb(candidates,target,idx,comb,total+candidates[idx],res);
        comb.pop_back();
        makeComb(candidates, target, idx + 1, comb, total, res);
    }

};





signed main() {
    Solution s;
    
    return 0;
}