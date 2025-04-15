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
        int evalRPN(vector<string>& v) {
            stack<int>st;
            int n=v.size();
            for(string c:v){
                if(c=="+"){
                    int s=st.top();st.pop();
                    int f=st.top();st.pop();
                    st.push(f+s);
                }else if(c=="-"){
                    int s=st.top();st.pop();
                    int f=st.top();st.pop();
                    st.push(f-s);
                }else if(c=="*"){
                    int s=st.top();st.pop();
                    int f=st.top();st.pop();
                    st.push(f*s);
                }else if(c=="/"){
                    int s=st.top();st.pop();
                    int f=st.top();st.pop();
                    st.push(f/s);
                }else{
                    st.push(stoi(c));
                }
            }
            return st.top();
        }
    };


signed main() {
    Solution s;
    
    return 0;
}