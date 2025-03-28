#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;
// Paste here
class Solution {
    public:
        int longestConsecutive(vector<int>& v) {
            unordered_set<int>st(v.begin(),v.end());
            int longest=0;
            for(auto i:st){
                if(st.find(i-1)==st.end()){
                    int currentLength=1;
                    while(st.find(i+currentLength)!=st.end()){
                        currentLength++;
                    }
                    longest=max(longest, currentLength);
                }
                
                
            }
            return longest;
        }
    };


signed main() {
    Solution s;
    
    return 0;
}