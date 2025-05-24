#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here
class Solution {
public:
    double findMedianSortedArrays(vector<int>& v, vector<int>& w) {
        int n=v.size();
        int m=w.size();
        int i=0,j=0,m1=0,m2=0;
        for(int cnt=0;cnt<=(m+n)/2;cnt++){
            m2=m1;
            if(i!=n and j!=m){
                if(v[i]>w[j])m1=w[j++];
                else m1=v[i++];
            }else if( i<n){
                m1=v[i++];
            }else{
                m1=w[j++];
            }
        }

        if((m+n)%2){
            return (double)m1;
        }else{
            double ans=(double)m1+(double)m2;
            return ans/2.0;
        }
    }
};

signed main() {
    Solution s;
    
    return 0;
}