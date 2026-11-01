class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        helper(root,maxDia);
        return maxDia;
    }

    int helper(TreeNode *root,int &maxDia){
        if(!root) return 0;

        int leftH = helper(root->left,maxDia);
        int rightH = helper(root->right,maxDia);

        maxDia = max(maxDia,(leftH + rightH));

        return 1 + max(leftH,rightH);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna