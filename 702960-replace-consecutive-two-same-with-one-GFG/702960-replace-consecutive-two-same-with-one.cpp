class Solution {
  public:
    string removeDuplicates(string& s) {
        stack<char> st;
        string ans = "";
        for(char ch : s){
            if(st.empty()){
                st.push(ch);
                ans += ch;
            }
            else{
                if(st.top()!=ch){
                    st.push(ch);
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