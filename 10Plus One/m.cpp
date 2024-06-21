#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
            int n=v.size();
            // reverse(v.begin(),v.end());
            for(int i=n-1;i>=0;i--){
                if(v[i]!=9){
                    v[i]++;
                    return v;
                }
                v[i]=0;
            }

            v.insert(v.begin(),1);
        
        

        return  v;
    }
};


int main() {
    Solution s;
    auto ans = s.plusOne({1, 2, 3});
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}