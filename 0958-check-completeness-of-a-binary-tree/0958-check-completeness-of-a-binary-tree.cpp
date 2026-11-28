class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool gap = false;

        while(!q.empty()){
            auto node = q.front();
            q.pop();

            if(!node){
                gap = true;
            }
            else{
                if(gap) return false;
                q.push(node->left);
                q.push(node->right);
            }
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna