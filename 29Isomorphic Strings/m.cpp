#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        map<char,char>st;
        map<char,char>ts;
        for(int i=0;i<n;i++){
            char schr=s[i];
            char tchr=t[i];
            if(st.find(schr)==st.end() and ts.find(tchr)==ts.end()){
                st[schr]=tchr;
                ts[tchr]=schr;
            }else if(st[schr] != tchr && ts[tchr] != schr){
                return false;
            }
        }
        return true;
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}