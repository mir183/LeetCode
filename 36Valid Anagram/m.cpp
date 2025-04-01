#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;

// Paste here

class Solution {
    public:
        bool isAnagram(string s, string t) {
            unordered_map<char,int>sm;
            unordered_map<char,int>tm;

            for(char c:s)sm[c]++;
            for(char c:t)tm[c]++;

            return sm==tm;
        }
    };


signed main() {
    Solution s;
    
    return 0;
}