class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            unordered_set<int> set;
            for(int j=i;j<n;j++){
                for(int k=i;k<=j;k++){
                    set.insert(nums[k]);
                }
                int size = set.size();
                ans += size * size;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna