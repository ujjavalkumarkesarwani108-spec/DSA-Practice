class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m = s.length();
        vector<int> ans;

        for(int i=0;i<m;i++){
            int a = startPos[0];
            int b = startPos[1];
            int count = 0;
            for(int j=i;j<m;j++){
                    if(s[j] == 'R') b++;
                    else if(s[j] == 'L') b--;
                    else if(s[j] == 'U') a--;
                    else if(s[j] == 'D') a++;

                    if(a>=0 && a<n && b>=0 && b<n) count++;
                    else break;
            }
            ans.push_back(count);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna