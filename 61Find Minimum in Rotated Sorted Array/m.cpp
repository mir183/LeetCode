#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here
class Solution {
    public:
        int findMin(vector<int>& v) {
            int n=v.size();
            int l=0,r=n-1;
            while(l<r){
                int mid=(l+r)/2;
                if(v[mid]<=v[r]){
                    r=mid;
                }else{
                    l=mid+1;
                }
            }
            return v[l];    }
    };

signed main() {
    Solution s;
    
    return 0;
}