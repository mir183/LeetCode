#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>
#include<unordered_set>
using namespace std;

// Paste here

// Paste here
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int n = s.size();
            int L=0;
            int mx=0;
            unordered_set<char>st;
            for(int R=0;R<n;R++){
                while(st.find(s[R])!=st.end()){
                    st.erase(s[L]);
                    L++;
                }
                st.insert(s[R]);
                mx=max(mx,R-L+1);
            }
            return mx;
        }
    };


signed main() {
    Solution s;
    
    return 0;
}