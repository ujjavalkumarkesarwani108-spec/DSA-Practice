class Solution {
public:
    TreeNode *build(vector<int>& in, int inlo, int inhi, vector<int>& post, int postlo, int posthi){
        if(inlo > inhi) return nullptr;             // or postlo > posthi
        
        TreeNode *root = new TreeNode(post[posthi]);
        if(inlo == inhi) return root;               // or postlo == posthi

        int i = inlo;
        while(i < inhi){
            if(in[i] == post[posthi]) break;
            i++;
        }

        int leftCount = i - inlo;                   
        // int rightCount = inhi - i;               not needed

        root->left = build(in, inlo, i-1, post, postlo, postlo+leftCount-1);
        root->right = build(in, i+1, inhi, post, postlo+leftCount, posthi-1);

        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n = in.size();
        return build(in,0,n-1,post,0,n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna