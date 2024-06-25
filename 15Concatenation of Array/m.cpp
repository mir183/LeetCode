#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    vector<int> getConcatenation(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n;i++){
            int x=v[i];
            v.push_back(x);
        }
        return v;
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}