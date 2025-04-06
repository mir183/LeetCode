#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n=nums.size();
            vector<int>v(n,1);
            
            int l=1;
            for(int i=0;i<n;i++){
                v[i]*=l;
                l*=nums[i];
            }

            int r=1;
            for(int i=n-1;i>=0;i--){
                v[i]*=r;
                r*=nums[i];
            }

            return v;
        }
    };

signed main() {
    Solution s;
    
    return 0;
}