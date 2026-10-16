class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1);
        vector<int> ngi(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            ngi[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        int j = 0;
        for(int i=0;i<n-k+1;i++){
            if(j<i) j = i;
            int mx = nums[j];
            while(j<i+k){
                mx = nums[j];
                if(ngi[j] >= i+k) break;
                j = ngi[j];
            }
            ans[i] = mx;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna