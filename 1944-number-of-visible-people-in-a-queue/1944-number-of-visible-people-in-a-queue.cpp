class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);

        for(int i=n-1;i>=0;i--){
            int count = 0;
            //pop
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
                count++;
            }
            //ans
            ans[i] = st.empty() ? count : count + 1;
            //push
            st.push(arr[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna