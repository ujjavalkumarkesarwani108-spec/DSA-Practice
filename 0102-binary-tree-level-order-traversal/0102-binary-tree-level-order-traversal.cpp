class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrderTraversal(root,ans);
        return ans;
    }

    void levelOrderTraversal(TreeNode *root,vector<vector<int>>& ans){
        int n = levels(root);
        for(int i=0;i<n;i++){
            vector<int> v;
            traverseNthLevel(root,i,v);
            ans.push_back(v);
        }
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

    int levels(TreeNode *root){
        if(!root) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna