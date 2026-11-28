class Solution {
public:
    void inorderREV(TreeNode *root,int &sum){
        if(!root) return;

        inorderREV(root->right,sum);

        sum += root->val;
        root->val = sum;

        inorderREV(root->left,sum);
    }

    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        inorderREV(root,sum);
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna