#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here

class Solution {
    public:
        int search(vector<int>& v, int t) {
            int n=v.size();
            int l=0,r=n-1;
            while(l<=r){
                int mid=(r+l)/2;
                if(v[mid]==t)return mid;
                else if(v[mid]<t)l=mid+1;
                else r=mid-1;
            }

            return -1;
        }
    };


signed main() {
    Solution s;
    
    return 0;
}