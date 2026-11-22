
class Solution {
  public:
    int levels(Node *root){
        if(!root) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void preorder(Node *root,vector<int>& ans,int level){
        if(!root) return;
        ans[level] = root->data;
        preorder(root->right,ans,level+1);
        preorder(root->left,ans,level+1);
    }
    vector<int> leftView(Node *root) {
        vector<int> ans(levels(root));
        preorder(root,ans,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna