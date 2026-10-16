class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> pse(n), nse(n);
        int ans = 0;

        // calculating prev. smaller ele idx
        for(int i=0;i<n;i++){
            //pop
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            //ans
            pse[i] = st.empty() ? -1 : st.top();
            //push
            st.push(i);
        }
        //clearing the stack
        while(!st.empty()){
            st.pop();
        }

        // calculating next smaller ele idx
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        
        for(int i=0;i<n;i++){
            ans = max(ans, (nse[i]-pse[i]-1)*heights[i]);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna