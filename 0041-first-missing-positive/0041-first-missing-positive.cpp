class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        int i = 0;
        while(i<n){
            if(nums[i] == INT_MIN){
                i++;
                continue;
            }
            int corrIdx = nums[i] - 1;
            if((corrIdx >= 0 && corrIdx < n) && (nums[corrIdx] != nums[i])) swap(nums[corrIdx],nums[i]);
            else i++;
        }

        for(int i=0;i<n;i++){
            if(nums[i] != i+1) return i+1;
        }

        return n+1;     // it means all are at corrIdx and positives [1,n] 
                        // so n+1 is first missing positive
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna