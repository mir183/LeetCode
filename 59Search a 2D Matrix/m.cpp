#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& v, int t) {
            int n=v.size();
            int top=0;
            int bot=n-1;
            while(top<=bot){
                int mid=(top+bot)/2;
                if(v[mid][0]<=t and v[mid][v[mid].size()-1]>=t){
                    break;
                }
                else if(v[mid][0]>t){
                    bot=mid-1;
                }
                else{
                    top=mid+1;
                }
            }
            int row=(top+bot)/2;
            int left=0;
            int right=v[row].size()-1;
            while(left<=right){
                int mid=(left+right)/2;
                if(v[row][mid]==t){
                    return true;
                }else if(v[row][mid]>t){
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }
            return false;
        }
    };

signed main() {
    Solution s;
    
    return 0;
}