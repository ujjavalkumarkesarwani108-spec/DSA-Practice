class Solution {
public:
    int levels(TreeNode *root){
        if(!root) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void helper(TreeNode *root,int& ans){
        if(!root) return;
        ans = max(ans,levels(root->left) + levels(root->right));
        helper(root->left, ans);
        helper(root->right, ans);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        helper(root,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna