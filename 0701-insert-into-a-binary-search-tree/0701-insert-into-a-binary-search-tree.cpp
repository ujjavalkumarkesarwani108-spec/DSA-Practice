class Solution {
public:
    void helper(TreeNode *root,int val){
        if(!root) return;

        if(!root->left && root->val > val){
            root->left = new TreeNode(val);
            return;
        }
        else if(!root->right && root->val < val){
            root->right = new TreeNode(val);
            return;
        }

        if(root->val > val) helper(root->left,val);
        else helper(root->right,val);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);
        helper(root,val);
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna