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
        int largestRectangleArea(vector<int>& v) {
            stack<int>st;
            st.push(-1);
            int mx=0;
            int n=v.size();

            for(int i=0;i<n;i++){
                while(st.top()!=-1 and v[i]<=v[st.top()]){
                    int h= v[st.top()];
                    st.pop();
                    int w=i-st.top()-1;
                    mx=max(mx, h*w);
                }



                st.push(i);
            }
            while(st.top()!=-1){
                int h= v[st.top()];
                st.pop();
                int w=n-st.top()-1;
                mx=max(mx, h*w);
            }

            return mx;



        }
    };



signed main() {
    Solution s;
    
    return 0;
}