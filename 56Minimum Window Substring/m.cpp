#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here

// Paste here
class Solution {
    #define sz 256+2
    bool equalFreq(vector<int>& c,vector<int>& f){
        for(int i=0;i<sz;++i)
            if(f[i]>0 and c[i]<f[i])
                return false;
        return true;
    }
public:
    string minWindow(string s, string t) {
        int n=s.size();
        if(n<t.size())
            return "";

        vector<int> f(sz,0);
        for(char &c: t)
            f[c]++;

        int l=0,r=0;
        int minWin = INT_MAX;
        string ans="";
        vector<int> c(sz,0);
        
        while(r<n){ 
            c[s[r]]++;
            if(equalFreq(c,f)){
                do {  
                    c[s[l]]--;
                    l++;
                }while(equalFreq(c,f));
                if(minWin > r-l+2){
                    minWin = r-l+2;
                    ans = s.substr(l-1,minWin);
                }
            }
            r++;
        }
        return ans;
    }
};


signed main() {
    Solution s;
    
    return 0;
}