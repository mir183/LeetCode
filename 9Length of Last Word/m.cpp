#include<bits/stdc++.h>
using namespace std;

// Paste your class and function definitions here

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int i=n-1;
        int cnt=0;
        int j;
        while (s[i]==' '){
            i--;
        }

        for(j=i;j>=0;j--){
            if(s[j]==' '){
                break;
            }else{
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