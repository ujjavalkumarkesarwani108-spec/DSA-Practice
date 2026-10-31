class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        int i = 0;
        while(i<n){
            int corrIdx = nums[i] - 1;
            if(nums[corrIdx] != nums[i]) swap(nums[corrIdx], nums[i]);
            else i++;
        }

        for(int i=0;i<n;i++){
            if(nums[i] != i+1){
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna