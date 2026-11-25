class Solution {
public:
    void helper(TreeNode *root,int val,TreeNode *newNode){
        if(!root) return;

        if(!root->left && root->val > val){
            root->left = newNode;
            return;
        }
        else if(!root->right && root->val < val){
            root->right = newNode;
            return;
        }

        if(root->val > val) helper(root->left,val,newNode);
        else helper(root->right,val,newNode);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *newNode = new TreeNode(val);
        if(!root) return newNode;
        helper(root,val,newNode);
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna