#include<bits/stdc++.h>
using namespace std;

// Paste here
// Paste here
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
		if(digits.empty()){
			return res;
		}

		unordered_map<char, string> digitToLetters = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

		BT(digits,0,"",res,digitToLetters);
		return res;
    }

	void BT(const string& digits, int idx, string comb, vector<string>& res, const unordered_map<char, string>& digitToLetters){
		if(idx==digits.length()){
			res.push_back(comb);
			return;
		}
		string letters=digitToLetters.at(digits[idx]);
		for(char c:letters){
			BT(digits, idx + 1, comb + c, res, digitToLetters);
		}

	}


};



signed main() {
    Solution s;
    
    return 0;
}