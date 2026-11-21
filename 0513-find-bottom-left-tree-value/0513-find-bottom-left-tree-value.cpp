class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int ans = root->val;

        while(!q.empty()){
            auto temp = q.front();              // or TreeNode *temp
            q.pop();
            
            ans = temp->val;

            if(temp->right) q.push(temp->right);
            if(temp->left) q.push(temp->left);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna