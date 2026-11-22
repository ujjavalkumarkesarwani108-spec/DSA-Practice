class Solution {
public:
    bool checkString(string s) {
        int n = s.length();

        bool flag = true;

        for(int i=0;i<n;i++){
            if(s[i]=='b' && flag) flag = false;
            else if(s[i]=='a' && !flag) return false; 
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna