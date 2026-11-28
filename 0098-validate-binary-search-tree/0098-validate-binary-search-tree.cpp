class Solution {
public:
    void inorder(TreeNode *root,TreeNode *&prev,bool &ans){
        if(!root || !ans) return;

        inorder(root->left,prev,ans);

        if(prev && prev->val >= root->val){
            ans = false;
            return;
        }
        prev = root;

        inorder(root->right,prev,ans);
    }
    bool isValidBST(TreeNode* root) {
        TreeNode *prev = nullptr;
        bool ans = true;

        inorder(root,prev,ans);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna