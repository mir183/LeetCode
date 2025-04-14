#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here


class MinStack {
    private:
        vector<vector<int>>st;
    public:
        MinStack() {
            
        }
        
        void push(int val) {
            int mn_val;
            if(st.empty()){
                mn_val=val;
            }else{
                mn_val=getMin();
                mn_val=min(mn_val,val);
            }
            st.push_back({val,mn_val});
        }
        
        void pop() {
            if(!st.empty())st.pop_back();
        }
        
        int top() {
            if(st.empty())return -1;
            else {
                return st.back()[0];
            }
        }
        
        int getMin() {
            if(st.empty()) return -1;
            else{
                return st.back()[1];
            }
        }
    };
    

signed main() {
    Solution s;
    
    return 0;
}