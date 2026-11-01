class Solution {
public:
    void helper(TreeNode *p, TreeNode *q, bool &same){
        if(!p && !q){
            same = true;
            return;
        }

        if(!p || !q || p->val != q->val){
            same = false;
            return;
        }

        if(same) helper(p->left,q->left,same);
        if(same) helper(p->right,q->right,same);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool same = true;
        helper(p,q,same);
        return same;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna