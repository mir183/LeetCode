#include<bits/stdc++.h>
using namespace std;

// Paste here

// Paste here
class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int ans;
        int n=v.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int x=v[i];
            m[x]++;
            if(m[x]>1){
                ans=x;
                break;
            }
        }
        return ans;
    }
};



signed main() {
    Solution s;
    
    return 0;
}