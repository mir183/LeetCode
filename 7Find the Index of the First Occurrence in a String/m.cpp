#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here


class Solution {
public:
    int strStr(string h, string n) {
        int hs=h.size();
        int ns=n.size();

        if(hs==1){
            return 0;
        }else{
                for(int i=0;i<hs-ns;i++){
                if(h.substr(i,ns)==n){
                return i;
                }
            }
        }
    return -1;
    }
};




int main() {
    Solution s;
    auto ans = s.strStr("abc","c");
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}