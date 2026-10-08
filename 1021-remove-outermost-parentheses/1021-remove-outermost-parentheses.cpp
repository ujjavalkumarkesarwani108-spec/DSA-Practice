class Solution {
public:
    string removeOuterParentheses(string s) {
        int opened = 0;
        string ans = "";
        for(char ch : s){
            if(ch == '('){
                if(opened != 0){
                    ans += ch;
                }
                opened++;
            }
            else{
                opened--;
                if(opened != 0){
                    ans += ch;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna