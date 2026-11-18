class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int ans = 0;

        for(int i=0;i<n-1;i+=2){
            if(s[i] != s[i+1]) ans++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna