#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here




class Solution {
public:
    bool isNStraightHand(vector<int>& v, int gs) {
        int n=v.size();

        if(n%gs!=0){
            return false;
        }else{
            map<int,int>m;
            for(int i=0;i<n;i++){
                int x=v[i];
                m[x]++;
            }   


            for(auto [f,s]:m){
                if(s==0)continue;
                for(int i=f;i<f+gs;i++){
                    if(m.count(i)==0 or m[i]<s) return false;
                    m[i]-=s;
                }
            }
            return true;


        }

    }
};



int main() {
    Solution s;
    auto ans = s.
    cout << ans << endl;
    // Add more test cases as needed
    return 0;
}