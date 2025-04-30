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
        vector<int> maxSlidingWindow(vector<int>& v, int k) {
            int n=v.size();
            vector<int>res;
            deque<int>dq;
            for(int i=0;i<n;i++){
                if(!dq.empty() and dq.front()==i-k){
                    dq.pop_front();
                }
                while(!dq.empty() and v[dq.back()]<v[i]){
                    dq.pop_back();
                }
                dq.push_back(i);
                if(i>=k-1){
                    res.push_back(v[dq.front()]);
                }
            
            
            }
            return res;

        }
    };

signed main() {
    Solution s;
    
    return 0;
}