class Solution {
public:
    TreeNode *build(vector<int>& pre, int prelo, int prehi, vector<int>& post, int postlo, int posthi){
        if(prelo > prehi) return nullptr;

        TreeNode *root = new TreeNode(pre[prelo]);
        if(postlo == posthi) return root;

        int i = postlo;
        while(i < posthi){
            if(post[i] == pre[prelo+1]) break;
            i++;
        }

        int leftCount = i - postlo + 1;

        root->left = build(pre, prelo+1, prelo+leftCount, post, postlo, i);
        root->right = build(pre, prelo+leftCount+1, prehi, post, i+1, posthi-1);

        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int n = pre.size();
        return build(pre,0,n-1,post,0,n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna