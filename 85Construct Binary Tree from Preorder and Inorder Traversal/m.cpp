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
    int preIndex;
    unordered_map<int,int>m;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        m.clear();
        int n=inorder.size();
        for(int i=0;i<n;i++){
            m[inorder[i]]=i;
        }
        preIndex=0;
        return build(preorder,0,n-1);
    }


    TreeNode* build(vector<int>&pre,int s,int e){
        if(s>e)return NULL;
        int rootVal=pre[preIndex++];
        TreeNode* root= new TreeNode(rootVal);
        int mid=m[rootVal];

        root->left=build(pre,s,mid-1);
         root->right=build(pre,mid+1,e);
         return root;
    }
};



signed main() {
    Solution s;
    
    return 0;
}