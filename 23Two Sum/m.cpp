#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here




class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int c=target - nums[i];
            if(mp.count(c)){
                return {mp[c],i};
            }
            else mp[nums[i]]=i;
        }
        return {};
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}