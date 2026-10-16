class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            //pop
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            
            //ans
            if(!st.empty()) ans[i] = i - st.top();
            else ans[i] = i + 1;
            
            //push
            st.push(i);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna