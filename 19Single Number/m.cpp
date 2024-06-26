#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here




class Solution {
public:
    int singleNumber(vector<int>& v) {
        int n=v.size();//  {1 2 3 4 1 2 4 6 7 9}
        sort(v.begin(),v.end());
        for(int i=1;i<n;i+=2){
            if(v[i]!=v[i-1]){
                return v[i-1];
            }
        }
        return v.back();
    }
};




int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}