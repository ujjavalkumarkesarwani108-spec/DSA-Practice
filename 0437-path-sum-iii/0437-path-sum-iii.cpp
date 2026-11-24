class Solution {
public:
    void solve(TreeNode *root,int &ans,long long sum, int targetSum){
        if(!root) return;
        
        sum += root->val;

        if(sum == targetSum){
            ans++;
        }

        solve(root->left,ans,sum,targetSum);
        solve(root->right,ans,sum,targetSum);
    }
    void helper(TreeNode *root,int &ans,int targetSum){
        if(!root) return;
        solve(root,ans,0,targetSum);
        helper(root->left,ans,targetSum);
        helper(root->right,ans,targetSum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        int ans = 0;
        helper(root,ans,targetSum);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna