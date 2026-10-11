class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(0);
        ans[0] = 1;
        for(int i=1;i<n;i++){
            // 1 - pop
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            
            // 2 - ans
            if(st.empty()) ans[i] = i + 1;  // i - (-1)
            else ans[i] = i - st.top();
            
            // 3 - push
            st.push(i);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna