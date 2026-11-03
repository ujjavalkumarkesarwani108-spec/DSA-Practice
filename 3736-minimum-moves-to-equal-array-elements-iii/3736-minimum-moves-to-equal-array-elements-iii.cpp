class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int maxx = 0;

        for(int x : nums){
            maxx = max(x,maxx);
        }

        for(int x : nums){
            ans += maxx - x;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna