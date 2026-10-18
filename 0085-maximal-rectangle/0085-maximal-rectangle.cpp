class Solution {
public:
    int largestRectangleHistogram(vector<int>& row){
        int n = row.size();
        vector<int> nsi(n), psi(n);
        stack<int> st;
        
        //next smaller index
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && row[st.top()] >= row[i]) st.pop();
            nsi[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // emptying the stack
        while(!st.empty()) st.pop();

        // previous smaller index
        for(int i=0;i<n;i++){
            while(!st.empty() && row[st.top()] >= row[i]) st.pop();
            psi[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        int mx = -1;
        for(int i=0;i<n;i++){
            mx = max(mx,((nsi[i]-psi[i]-1)*(row[i])));
        }
        return mx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;

        vector<int> row(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0) row[j] = matrix[i][j]-'0';
                else{
                    if(matrix[i][j]-'0' == 1) row[j]++;
                    else row[j] = 0;
                }
            }
            ans = max(ans,largestRectangleHistogram(row));
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna