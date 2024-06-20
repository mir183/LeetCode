#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



class Solution {
public:
    int removeElement(vector<int>& v, int x) {
        // sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=x){
                v[cnt]=v[i];
                cnt++;
            }
        }
        return cnt;
    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}