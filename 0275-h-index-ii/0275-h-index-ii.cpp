class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int ans = 0;

        int lo = 0, hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(citations[mid] >= (n-mid)){
                ans = (n-mid);
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna