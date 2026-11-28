class Solution {
public:
    TreeNode *build(vector<int>& nums,int lo, int hi){
        if(lo>hi) return nullptr;

        int mid = lo + (hi-lo)/2;
        TreeNode *root = new TreeNode(nums[mid]);

        root->left = build(nums,lo,mid-1);
        root->right = build(nums,mid+1,hi);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return build(nums,0,n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna