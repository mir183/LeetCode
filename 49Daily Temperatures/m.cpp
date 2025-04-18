#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>
#include<stack>
using namespace std;

// Paste here

// Paste here
class Solution {
    public:
        vector<int> dailyTemperatures(vector<int>& v) {
            int n=v.size();
            stack<int>st;
            vector<int>res(n,0);

            for(int i=0;i<n;i++){
                while(!st.empty() and v[i]>v[st.top()]){
                    int idx=st.top();st.pop();
                    res[idx]=i-idx;
                }
                st.push(i);
            }

            return res;
        }
    };




signed main() {
    Solution s;
    
    return 0;
}