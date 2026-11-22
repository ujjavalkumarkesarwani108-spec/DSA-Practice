class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 1;

        int ans = 0;

        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[i] >= nums[i+1]) ans++;
            }
            else if(i==n-1){
                if(nums[i] >= nums[i-1]) ans++;
            }
            else{
                double avg = (nums[i-1]+nums[i+1])/2.0;
                if(nums[i] >= avg) ans++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna