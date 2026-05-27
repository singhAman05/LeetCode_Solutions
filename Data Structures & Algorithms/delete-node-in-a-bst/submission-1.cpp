class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode *cur=root, *pre=nullptr;
        bool dir = 0;
        while(cur && cur->val!=key){
            int tmp = cur->val;
            pre = cur;
            if(tmp<key){cur = cur->right;dir=1;}
            else {cur = cur->left;dir=0;}
        }
        if(!cur) return root;
        TreeNode* tmp1 = cur->left;
        TreeNode* tmp2 = cur->right;
        if(!tmp2){
            if(cur==root) return tmp1;
            if(dir) pre->right = tmp1;
            else pre->left = tmp1;
            return root;
        }

        cur =  cur->right;
        while(cur && cur->left) cur = cur->left;

        cur->left = tmp1;

        if(pre==nullptr) return tmp2;

        if(dir) pre->right = tmp2;
        else pre->left = tmp2;

        return root;
    }
};