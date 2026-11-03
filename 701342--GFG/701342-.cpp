class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        
        vector<int> pge(n);
        stack<int> st;
        
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] <= arr[i]){
                st.pop();
            }
            
            pge[i] = st.empty() ? i - (-1) : i - st.top();
            
            st.push(i);
        }
        
        return pge;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna