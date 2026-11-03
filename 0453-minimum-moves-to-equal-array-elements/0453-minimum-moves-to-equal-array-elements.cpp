class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int minn = INT_MAX;
        int ans = 0;

        for(int ele : nums){
            minn = min(minn,ele);
        }

        for(int ele : nums){
            ans += (ele - minn);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna