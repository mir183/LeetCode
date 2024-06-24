#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here




class Solution {
public:
    void merge(vector<int>& Lr, int n, vector<int>& Rr, int m) {
        for(int i=0; i<m; i++){
            Lr[n+i] = Rr[i];
        }
        sort(Lr.begin(), Lr.end());
    }
};

int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}