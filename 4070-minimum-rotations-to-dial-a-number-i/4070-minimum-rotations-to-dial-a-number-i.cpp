class Solution {
public:
    int minRotations(string s) {
        int ans = 0;
        int pos = 0;
        for(char ch : s){
            int rot = abs(pos - (ch - '0'));
            if(rot > 5) rot = 10 - rot;
            pos = ch - '0';
            ans += rot;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna