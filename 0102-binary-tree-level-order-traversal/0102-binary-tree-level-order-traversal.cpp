class Solution {
public:
    int levels(TreeNode *root){
        if(!root) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }

    void levelOrderTraversal(TreeNode *root,vector<vector<int>>& ans,int i){
        if(!root) return;

        ans[i].push_back(root->val);
        
        levelOrderTraversal(root->left,ans,i+1);
        levelOrderTraversal(root->right,ans,i+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans(n);
        levelOrderTraversal(root,ans,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna