#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    int searchInsert(vector<int>& v, int x) {
        auto it = lower_bound(v.begin(), v.end(), x);
        return it - v.begin();
    }
};


int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}