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
        int carFleet(int target, vector<int>& p, vector<int>& s) {
            vector<pair<int,double>>cars;
            int n=p.size();
            for(int i=0;i<n;i++){
                double time=(double)(target-p[i])/s[i];
                cars.push_back({p[i],time});
            }
            sort(cars.begin(),cars.end());



            stack<double>st;
            for(int i=0;i<n;i++){
                double time=cars[i].second;
                while(!st.empty() and time>=st.top()){
                    st.pop();
                }
                st.push(time);
            }
            return st.size();
        }
    };

signed main() {
    Solution s;
    
    return 0;
}