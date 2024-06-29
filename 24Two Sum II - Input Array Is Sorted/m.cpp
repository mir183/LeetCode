#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here




class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n=v.size();
        int l=0,r=n-1;
        while (l<r)
        {
            int val=v[l]+v[r];
            if(val==t){
                return {l+1,r+1};
            }else if(val>t){
                r--;
            }else if(val<t){
                l++;
            }
        }
        
        return {-1,-1};
        
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}