class Solution {
public:
    void helper(TreeNode *root, string path, vector<string>& ans){
        if(!root) return;

        if(!path.empty()) path += "->";
        path += to_string(root->val);

        if(!root->left && !root->right){
            ans.push_back(path);
            return;
        }
        helper(root->left,path,ans);
        helper(root->right,path,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,"",ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna