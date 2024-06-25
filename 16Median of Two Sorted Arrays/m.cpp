#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        
        int m=v1.size();
        int n=v2.size();

        for(int i=0;i<n;i++){
            int x=v2[i];
            v1.push_back(x);
        }

        sort(v1.begin(),v1.end());

        n=v1.size();
        int mid;
        double ans;
        if(n%2){
            
            ans= v1[n/2];
        }else{
            int sum=v1[(n-1)/2]+v1[n/2];
            ans=(sum/2.0);
        }


        return ans;

    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}