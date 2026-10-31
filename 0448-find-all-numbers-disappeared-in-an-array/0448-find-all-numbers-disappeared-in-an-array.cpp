class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for(int i=0;i<n;i++){
            int corrIdx = abs(nums[i]) - 1;

            if(nums[corrIdx] > 0){
                nums[corrIdx] = -nums[corrIdx];
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i] > 0) ans.push_back(i+1);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna