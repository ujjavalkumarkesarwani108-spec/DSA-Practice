class Solution {
public:
    int hammingWeight(int n) {
        int ans = 0;
        
        while(n){
            n = n & (n-1);
            ans++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna