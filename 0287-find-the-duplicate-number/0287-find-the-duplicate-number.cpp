class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            int corrIdx = abs(nums[i]) - 1;

            if(nums[corrIdx] < 0) return abs(nums[i]);

            nums[corrIdx] *= -1;
        }

        return 108;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna