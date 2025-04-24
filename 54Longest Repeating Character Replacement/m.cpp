#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>
#include<unordered_map>
using namespace std;

// Paste here

// Paste here
class Solution {
    public:
        int characterReplacement(string s, int k) {
            if(s.empty())return 0;
            unordered_map<char,int>m;
            int Result=0,L=0,MaxLength=0,n=s.size();

            for(int R=0;R<n;R++){
                m[s[R]]++;
                MaxLength=max(MaxLength,m[s[R]]);
                int CurrentWindowLength=R-L+1;
                while((CurrentWindowLength-MaxLength) > k){
                    m[s[L]]--;
                    L++;
                    CurrentWindowLength=R-L+1;
                }
                
                Result=max(Result,CurrentWindowLength);
            }
            
            return Result;
        }
    };



signed main() {
    Solution s;
    
    return 0;
}