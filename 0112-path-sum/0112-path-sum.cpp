class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;

        if(!root->left && !root->right){
            return root->val == targetSum;
        }

        targetSum -= root->val;

        return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum);        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna