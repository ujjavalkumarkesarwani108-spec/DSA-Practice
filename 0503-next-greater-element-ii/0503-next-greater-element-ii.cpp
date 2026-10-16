class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<2;i++){
            for(int j=n-1;j>=0;j--){
                //pop
                while(!st.empty() && st.top() <= nums[j]) st.pop();
                //ans
                ans[j] = st.empty() ? -1 : st.top();
                //push
                st.push(nums[j]);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna