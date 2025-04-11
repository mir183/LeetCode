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
        int maxArea(vector<int>& v) {
            int n=v.size();
            int L=0,R=n-1;
            int mx=-1;
            while(L<R){
                int area=(R-L)*min(v[L],v[R]);
                mx=max(mx,area);
                if(v[L]<v[R])L++;
                else if(v[L]>v[R])R--;
                else if(v[L]==v[R])L++; //R--, L++ both will work same
            }
            return mx;
        }
    };



signed main() {
    Solution s;
    
    return 0;
}