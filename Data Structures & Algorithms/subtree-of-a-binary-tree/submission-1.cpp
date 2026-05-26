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
    bool solve(TreeNode* p, TreeNode* q){
        if(!p && !q) return 1;
        if(!p || !q || p->val!=q->val) return 0;

        return solve(p->left,q->left) && solve(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root || !subRoot) return 0;
        if(root->val == subRoot->val && solve(root, subRoot)) return 1;

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
