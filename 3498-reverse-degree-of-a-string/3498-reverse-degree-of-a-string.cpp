class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += (i+1) * ((s[i]-71) - 2*(s[i]-'a'));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna