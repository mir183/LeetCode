#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here

// Paste here2d
class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>>ans;
            for(string s:strs){
                vector<int>cnt(26,0);

                for(char c:s){
                    cnt[c-'a']++;
                }


                string key="";

                for(int i:cnt){
                    key+=to_string(i)+"_";
                }
                ans[key].push_back(s);

            }
            
            vector<vector<string>>res;
            for(auto [x,y]:ans){
                res.push_back(move(y));
            }
            return res;
        }
    };


signed main() {
    Solution s;
    
    return 0;
}