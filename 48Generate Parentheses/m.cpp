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
        vector<string> generateParenthesis(int n) {
            vector<string>res;
            dfs(0,0,"",n,res);
            return res;
        }

    private:
        void dfs(int openP,int closeP,string s,int n,vector<string>& res){
            if(openP==closeP and openP+closeP==2*n){
                res.push_back(s);
                return;
            }

            if(openP<n){
                dfs(openP+1,closeP,s+"(",n,res);
            }
            if(closeP<openP){
                dfs(openP,closeP+1,s+")",n,res);
            }


        }

    };


signed main() {
    Solution s;
    
    return 0;
}