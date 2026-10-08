class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        for(char ch : s){
            // excluding open outer parenthesis
            if(!st.empty()) ans += ch;

            if(ch == '(') st.push(ch);
            else st.pop();

            // excluding close outer parenthesis
            if(st.empty()){
                ans.pop_back();
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna