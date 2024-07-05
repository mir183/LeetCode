#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        int n=v.size();
        vector<vector<int>>f;
        sort(v.begin(),v.end());

        for(int i=0;i<n;i++){
            if(i>0 and  v[i]==v[i-1]) continue;

            int j=i+1;
            int k=n-1;
            while (j<k){
                int total=v[i]+v[j]+v[k];
                if(total==0){
                    f.push_back({v[i],v[j],v[k]});
                    j++;
                    while(j<k and v[j]==v[j-1]) j++;
                }
                else if(total>0){
                    k--;
                }
                else{
                    j++;
                }

            }

            
        }
        return f;

    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}