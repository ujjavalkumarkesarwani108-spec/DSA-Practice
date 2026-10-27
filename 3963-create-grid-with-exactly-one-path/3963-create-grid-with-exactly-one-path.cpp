class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m,string(n,'#'));

        for(int i=0;i<m;i++){
            ans[i][0] = '.';
        }

        for(int i=0;i<n;i++){
            ans[m-1][i] = '.';
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna