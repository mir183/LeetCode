#include<bits/stdc++.h>
using namespace std;

// Paste here

struct TrieNode {
    TrieNode* children[26] = {NULL};
    string word="";
};



// Paste here
class Solution {
public:
    TrieNode* buildTree(vector<string>& words) {
        TrieNode* root = new TrieNode();
        for (const string& word : words) {
            TrieNode* node = root;
            for (char c : word) {
                int index = c - 'a';
                if (!node->children[index]) {
                    node->children[index] = new TrieNode();
                }
                node = node->children[index];
            }
            node->word = word; 
        }
        return root;
    }
    void dfs(vector<vector<char>>& board, TrieNode* node, int i, int j, vector<string>& result) {
        char c = board[i][j];
        if (c == '#' || !node->children[c - 'a']) return;
        node = node->children[c - 'a'];
        if (!node->word.empty()) {
            result.push_back(node->word);
            node->word = "";
        }
        
        board[i][j] = '#';
        if (i > 0) dfs(board, node, i - 1, j, result);
        if (j > 0) dfs(board, node, i, j - 1, result);
        if (i < board.size() - 1) dfs(board, node, i + 1, j, result);
        if (j < board[0].size() - 1) dfs(board, node, i, j + 1, result);
        board[i][j] = c; 
    }




    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root = buildTree(words);
        vector<string> result;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                dfs(board, root, i, j, result);
            }
        }
        return result;
    }
};





signed main() {
    Solution s;
    
    return 0;
}