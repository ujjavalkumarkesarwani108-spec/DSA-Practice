class Solution {
public:
    int levels(TreeNode *root){
        if(!root) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }

    void traverseNthLevel(TreeNode *root,int n,vector<int>& v){
        if(!root) return;
        traverseNthLevel(root->left,n-1,v);
        if(!n){
            v.push_back(root->val);
            return;
        }
        traverseNthLevel(root->right,n-1,v);
    }

    void levelOrderTraversal(TreeNode *root,vector<vector<int>>& ans){
        int n = levels(root);
        for(int i=n-1;i>=0;i--){
            vector<int> v;
            traverseNthLevel(root,i,v);
            ans.push_back(v);
        }
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrderTraversal(root,ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna