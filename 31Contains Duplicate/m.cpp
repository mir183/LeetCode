#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_set<int> st(v.begin(), v.end());
        return st.size() != v.size();
    }
};


int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}