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
        bool checkInclusion(string s1, string s2) {
            int n=s1.size();
            int m=s2.size();
            if(n>m)return false;
            unordered_map<char,int>m1;
            unordered_map<char,int>m2;
            for(int i=0;i<n;i++){
                m1[s1[i]]++;
                m2[s2[i]]++;
            }
            if(m1==m2)return true;
            int l=0;
            for(int r=n;r<m;r++){
                m2[s2[r]]++;
                m2[s2[l]]--;
                
                if(m2[s2[l]]==0){
                    m2.erase(s2[l]);
                }
                l++;

                if(m1==m2)return true;
            }

            return false;
        }
    };


signed main() {
    Solution s;
    
    return 0;
}