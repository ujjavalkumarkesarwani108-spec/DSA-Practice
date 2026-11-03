class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        string ans = "";

        while(ss>>temp){
            ans = temp + " " + ans;
        }
        ans.pop_back();
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna