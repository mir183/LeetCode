#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int unq=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]!=nums[i]){
                nums[++unq]=nums[i];
            }else{
                continue;
            }
        }
        return unq+1;
    }
};