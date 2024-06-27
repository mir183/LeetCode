#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        while (v.size()>1)
        {
            sort(v.begin(),v.end(), greater<int>());

            int y=v[0];
            int x=v[1];
            v.erase(v.begin());
            v[0]=y-x;
            if(v[0]==0){
                v.erase(v.begin());
            }
        }
        if(v.empty()){
            return 0;
        }else return v[0];
        
    }
};




int main() {
    Solution s;
    vector<int> v = {2,7,4,1,8,1};
    auto ans = s.lastStoneWeight(v);
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}