class Solution {
public:
    void solve(TreeNode *root,vector<int> path,vector<vector<int>>& ans,int targetSum){
        if(!root) return;

        if(!root->left && !root->right){
            path.push_back(root->val);
            if(targetSum == root->val) ans.push_back(path);
            return;
        }
        path.push_back(root->val);
        solve(root->left,path,ans,targetSum - root->val);
        solve(root->right,path,ans,targetSum - root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(root,path,ans,targetSum);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna