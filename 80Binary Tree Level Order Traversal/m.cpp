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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return{};
        vector<vector<int>>ans;
        queue<TreeNode*>    q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode* top=q.front();
                q.pop();
                temp.push_back(top->val);
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
            }

            ans.push_back(temp);
        }
        return ans;
    }
};



signed main() {
    Solution s;
    
    return 0;
}