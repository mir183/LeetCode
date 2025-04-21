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
        int maxProfit(vector<int>& v) {
            int n=v.size();
            int buy=v[0];
            int profit=0;
            for(int i=1;i<n;i++){
                if(v[i]<buy)buy=v[i];
                int sell=v[i];
                profit=max(profit,sell-buy);
            }
            return profit;
        }
    };


signed main() {
    Solution s;
    
    return 0;
}