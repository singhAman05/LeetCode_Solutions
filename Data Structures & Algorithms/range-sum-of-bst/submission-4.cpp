/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    void solve(TreeNode* root, int l, int h){
        if(!root) return;
        if(root->val < l) return solve(root->right,l,h);
        if(root->val > h) return solve(root->left,l,h);
        ans+=root->val;
        if(root->val==h) return solve(root->left,l,h);
        if(root->val==l) return solve(root->right,l,h);

        solve(root->left,l,h);
        solve(root->right,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        solve(root,low,high);
        return ans;
    }
};