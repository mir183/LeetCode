#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here
class Solution {
    public:
        int trap(vector<int>& v) {
            int n=v.size();
            int l=0,r=n-1;
            int mxL=v[l],mxR=v[r];
            int water=0;
            while(l<r){
                if(mxL<mxR){
                    l++;
                    mxL=max(mxL,v[l]);
                    water+=(mxL-v[l]);
                }else{
                    r--;
                    mxR=max(mxR,v[r]);
                    water+=mxR-v[r];
                }
            }
            return water;
        }
    };

signed main() {
    Solution s;
    
    return 0;
}