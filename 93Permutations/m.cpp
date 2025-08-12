#include<bits/stdc++.h>
using namespace std;

// Paste here
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        int n=nums.size();
        if(n==1){
            vector<int>temp;
            temp.push_back(nums[0]);
            res.push_back(temp);
            return res;
        }
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                if(i!=j){
                    temp.push_back(nums[j]);
                }
            }
            vector<vector<int>>sub=permute(temp);
            for(auto &v:sub){
                v.push_back(nums[i]);
                res.push_back(v);
            }
        }
        return res;
    }
};



signed main() {
    Solution s;
    
    return 0;
}