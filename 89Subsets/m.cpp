#include<bits/stdc++.h>
using namespace std;

    // Paste here
    class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> result;
            vector<int> subset;

            cretesubset(nums, 0, result, subset);
            return result;
        }

        void cretesubset(vector<int>& nums, int index, vector<vector<int>>& res, vector<int>& subset){
            if(index==nums.size()){
                res.push_back(subset);
                return;
            }
            subset.push_back(nums[index]);
            cretesubset(nums, index + 1, res, subset);
            
            subset.pop_back();
            cretesubset(nums, index + 1, res, subset);

        }

    };



signed main() {
    Solution s;
    
    return 0;
}