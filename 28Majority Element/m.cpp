#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        return v[n/2];
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}