class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        int ans = 0;

        sort(arr2.begin(),arr2.end());

        for(int i=0;i<n1;i++){
            int lo = 0;
            int hi = n2-1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(arr2[mid] < arr1[i]){
                    if(abs(arr2[mid] - arr1[i]) <= d) break;
                    lo = mid + 1;
                }
                else{
                    if(abs(arr2[mid] - arr1[i]) <= d) break;
                    hi = mid - 1;
                }
            }
            if(lo > hi) ans++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna