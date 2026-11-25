class Solution {
public:
    void helper(TreeNode *root,int val){
        if(!root) return;

        if(val < root->val){
            if(!root->left){
                root->left = new TreeNode(val);
                return;
            }
            helper(root->left,val);  // here else keyword is optional bcz of return in if()
        }
        else{   // val > root->val not >= bcz unique elements guaranteed in constraints
            if(!root->right){
                root->right = new TreeNode(val);
                return;
            }
            helper(root->right,val);
        }
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