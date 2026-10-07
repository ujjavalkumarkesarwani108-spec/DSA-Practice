class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxd = 0;
        int i = n-1;
        while(i){
            if(colors[0]!=colors[i]){
                maxd = i;
                break;
            }
            i--;
        }

        i = 0;
        while(i<n){
            if(colors[n-1]!=colors[i]){
                maxd = max(maxd,n-1-i);
                break;
            }
            i++;
        }
        return maxd;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna