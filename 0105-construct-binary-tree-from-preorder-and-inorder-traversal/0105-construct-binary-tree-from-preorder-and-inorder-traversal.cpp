class Solution {
public:
    TreeNode *build(vector<int>& pre, int prelo, int prehi, vector<int>& in, int inlo, int inhi){
        if(prelo > prehi) return nullptr;   // or if(inlo > inhi)

        TreeNode *root = new TreeNode(pre[prelo]);
        if(prelo == prehi) return root;

        int i = inlo;
        while(i<inhi){
            if(in[i] == pre[prelo]) break;
            i++;
        }

        int leftCount = i - inlo;
        // int rightCount = inhi - i;       not needed

        root->left = build(pre, prelo+1, prelo+leftCount, in, inlo, i-1);
        root->right = build(pre, prelo+leftCount+1, prehi, in, i+1, inhi);

        return root;
    }

    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size();
        return build(pre,0,n-1,in,0,n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna