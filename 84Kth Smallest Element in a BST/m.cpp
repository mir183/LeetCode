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
        int cnt=0;
        int res;
        void inorder(TreeNode* node, int k){
            if(!node) return;
            inorder(node->left,k);
            cnt++;
            if(cnt==k){
                res=node->val;
                return;
            }
            // cnt++;
            inorder(node->right,k);
        }


    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return res;
    }
};



signed main() {
    Solution s;
    
    return 0;
}