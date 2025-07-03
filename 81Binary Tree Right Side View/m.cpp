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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        queue<TreeNode*> q;
        if(root)q.push(root);
        while(!q.empty()){
            TreeNode* rs=NULL;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node){
                    rs=node;
                    if(node->left)q.push(node->left);
                    if(node->right)q.push(node->right);
                }
            }
            if(rs) res.push_back(rs->val);
        }
        return res;
    }
};



signed main() {
    Solution s;
    
    return 0;
}