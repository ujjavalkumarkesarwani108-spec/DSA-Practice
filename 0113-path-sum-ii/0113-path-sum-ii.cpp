class Solution {
public:
    void solve(TreeNode *root,vector<int>& path,vector<vector<int>>& ans,int targetSum){
        if(!root) return;

        path.push_back(root->val);

        if(!root->left && !root->right && targetSum == root->val){
            ans.push_back(path);
        }
        else{
            solve(root->left,path,ans,targetSum - root->val);
            solve(root->right,path,ans,targetSum - root->val);
        }

        path.pop_back();    // backtrack
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