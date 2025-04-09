#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here

// Paste here
class Solution {
    public:
        vector<int> twoSum(vector<int>& v, int t) {
            int n=v.size();
            int i=0,j=n-1;
            while(i<j){
                int tmp=v[i]+v[j];
                if(tmp==t){
                    return {i+1,j+1};
                }
                
                if(tmp>t)j--;
                if(tmp<t)i++;
            }
            return {};
        }
    };

signed main() {
    Solution s;
    
    return 0;
}