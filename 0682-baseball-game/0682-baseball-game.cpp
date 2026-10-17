class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans = 0;
        for(string ch : operations){
            if(ch == "C"){
                st.pop();
            }
            else if(ch == "D"){
                st.push(2 * st.top());
            }
            else if(ch == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x + y);
            }
            else{
                int n = stoi(ch);
                st.push(n);
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna