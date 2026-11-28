class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;

        int lo = 0, hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(mid < n-1 && nums[mid] == nums[mid+1]){
                if((mid+1) % 2 == 0) hi = mid - 1;
                else lo = mid + 1;
            }
            else if(mid > 0 && nums[mid] == nums[mid-1]){
                if(mid % 2 == 0) hi = mid - 1;
                else lo = mid + 1;
            }
            else{
                ans = nums[mid];
                break;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna