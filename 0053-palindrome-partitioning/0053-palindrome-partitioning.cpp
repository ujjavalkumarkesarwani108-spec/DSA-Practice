class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        while(i<j){
            if(s[i++] != s[j--]) return false;
            // i++, j--;
        }
        return true;
    }
    void solve(vector<vector<string>>& ans, vector<string>& cur, string &s, int i){
        // base case
        if(i >= s.length()){
            ans.push_back(cur);
            return;
        }
        
        // choice and validity
        for(int j=i;j<=s.length();j++){
            if(isPalindrome(s,i,j)){
                // string temp = "";
                // for(int k=i;k<=j;k++) temp += s[k];
                // cur.push_back(temp);
                //       or
                cur.push_back(s.substr(i,j-i+1));

                solve(ans,cur,s,j+1);
                cur.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> cur;

        solve(ans,cur,s,0);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna