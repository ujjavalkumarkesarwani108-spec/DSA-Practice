class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        stack<int> st;
        vector<int> ngi(n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]) st.pop();

            ngi[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        for(int i=0;i<n;i++){
            if(ngi[i] != -1){
                ngi[i] -= i;
            }
            else ngi[i] = 0;
        }

        return ngi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna