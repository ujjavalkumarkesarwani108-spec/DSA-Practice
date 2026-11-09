class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int i = 0, j = n-1;
        int maxWater = 0;

        while(i<j){
            int water = min(height[i],height[j]) * (j-i);
            maxWater = max(maxWater,water);
            height[i] <= height[j] ? i++ : j--;
        }

        return maxWater;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna