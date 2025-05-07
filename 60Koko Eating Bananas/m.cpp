#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here
class Solution {
    public:
        int minEatingSpeed(vector<int>& v, int h) {
            int left=1;
            int right=*max_element(v.begin(),v.end());
            while(left<right){
                int mid=left+(right-left)/2;
                int total=0;
                for(int i:v){
                    total+=(i+mid-1)/mid;
                }
                if(total<=h)right=mid;
                else left=mid+1;
            }
            return left;
        }
    };

signed main() {
    Solution s;
    
    return 0;
}