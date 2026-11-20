class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = nums[0] + nums[1] + nums[2];

        for(int i=0;i<n;i++){
            int j = i+1, k = n-1;
            while(j<k){
                int val = nums[i]+nums[j]+nums[k];
                if(abs(val-target) < abs(ans-target)){
                    ans = val;
                }
                else if(val < target) j++;
                else k--;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna