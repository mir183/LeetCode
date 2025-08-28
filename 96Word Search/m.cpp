#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        unordered_set<string> vis;

        unordered_map<char, int> cnt;
        for (char c : word) {
            cnt[c]++;
        }
        if (cnt[word[0]] > cnt[word.back()]) {
            reverse(word.begin(), word.end());
        }
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                if (dfs(r, c, 0, board, word, vis)) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    bool dfs(int r, int c, int k, vector<vector<char>>& board, string& word, unordered_set<string>& vis) {
        int row = board.size();
        int col = board[0].size();

        if (k == word.size()) {
            return true;
        }
        if (r < 0 || r >= row || c < 0 || c >= col || vis.count(to_string(r) + " " + to_string(c)) || board[r][c] != word[k]) {
            return false;
        }
        vis.insert(to_string(r) + " " + to_string(c));
        bool res = dfs(r + 1, c, k + 1, board, word, vis) ||
                   dfs(r - 1, c, k + 1, board, word, vis) ||
                   dfs(r, c + 1, k + 1, board, word, vis) ||
                   dfs(r, c - 1, k + 1, board, word, vis);
        vis.erase(to_string(r) + " " + to_string(c));
        return res;
    }
};


signed main() {
    Solution s;
    
    return 0;
}