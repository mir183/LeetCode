#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here

// Paste here


class Solution {
    public:
        bool isPalindrome(string s) {
            string filtered;
            for(char c:s){
                if(isalnum(c)){
                    filtered+=tolower(c);
                }
            }
            string r=filtered;
            reverse(filtered.begin(),filtered.end());

            return r==filtered;


        }
    };


signed main() {
    Solution s;
    
    return 0;
}