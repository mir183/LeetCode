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
        vector<int> topKFrequent(vector<int>& v, int k) {
            int n=v.size();
            unordered_map<int,int>mp;

            for(int i:v){
                mp[i]++;
            }

            vector<vector<int>>freq(n+1);
            for(auto i:mp){
                freq[i.second].push_back(i.first);
            }

            vector<int>res;
            n=freq.size();

            for(int i=n-1;i>=0;i--){
                for(int num:freq[i]){
                    res.push_back(num);
                    if(res.size()==k){
                        return res;
                    }
                }
                
            }
            return {};
        }
    };


signed main() {
    Solution s;
    
    return 0;
}