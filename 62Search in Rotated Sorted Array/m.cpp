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
        int l=0;
        int r=v.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(v[m]==t){
                return m;
            }else if(v[m]>=v[l]){
                if(v[l]<=t and t<=v[m]) r=m-1;
                else l=m+1;
            }else{
                 if(v[m]<=t and t<=v[r])l=m+1;
                 else r=m-1;
            }
        }

        return -1;
    }
};

signed main() {
    Solution s;
    
    return 0;
}