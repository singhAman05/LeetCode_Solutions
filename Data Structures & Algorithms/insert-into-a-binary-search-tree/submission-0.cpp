class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr)
            return new TreeNode(val);

        TreeNode* cur = root;

        while(cur != nullptr){
            if(cur->val < val){
                if(cur->right == nullptr){
                    cur->right = new TreeNode(val);
                    break;
                }
                cur = cur->right;
            }
            else{
                if(cur->left == nullptr){
                    cur->left = new TreeNode(val);
                    break;
                }
                cur = cur->left;
            }
        }
        return root;
    }
};