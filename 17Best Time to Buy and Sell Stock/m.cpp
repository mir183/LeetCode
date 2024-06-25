#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& v) {
        int buyprice=v[0];
        int n=v.size();
        int ans=0;
        for(int i=1;i<n;i++){
            if(buyprice>v[i]){
                buyprice=v[i];

                
            }
            ans=max(ans,v[i]-buyprice);
        }
        return ans;
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}