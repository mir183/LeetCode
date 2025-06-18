#include<bits/stdc++.h>
using namespace std;

// Paste here
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }

    pair<bool,int>dfs(TreeNode* node){
        if(!node) return {true,0};
        auto [lb,lh]=dfs(node->left);
        auto [rb, rh]=dfs(node->right);
        bool balanced;
        if( lb and rb and abs(lh-rh)<=1){
            balanced=true;
        }else balanced=false;

        return {balanced, 1+max(lh,rh)};
    }
};



signed main() {
    Solution s;
    
    return 0;
}