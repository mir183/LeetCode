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
        bool isValidSudoku(vector<vector<char>>& board) {
            unordered_set<char>row[9];
            unordered_set<char>cols[9];
            unordered_set<char>box[3][3];
            for(int r=0;r<9;r++){
                for(int c=0;c<9;c++){
                    if(board[r][c]=='.')continue;

                    char value=board[r][c];

                    if(row[r].count(value) or cols[c].count(value) or box[r/3][c/3].count(value)){
                        return false;
                    }

                    row[r].insert(value);
                    cols[c].insert(value);
                    box[r/3][c/3].insert(value);

                }
                


            }
            return true;

        }
    };


signed main() {
    Solution s;
    
    return 0;
}