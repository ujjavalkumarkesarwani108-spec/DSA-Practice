class Solution {
public:
    bool helper(TreeNode *p,TreeNode *q){
        if(!p && !q) return true;

        if(!p || !q || p->val != q->val) return false;

        return helper(p->left,q->right) && helper(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
       return helper(root->left,root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna