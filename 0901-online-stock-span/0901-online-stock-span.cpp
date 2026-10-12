class StockSpanner {
public:
    stack<pair<int,int>> st;
    int idx = -1;
    StockSpanner() {

    }
    
    int next(int price){
        idx++;

        // pop
        while(!st.empty() && st.top().first <= price){
            st.pop();
        }

        // ans
        int ans = idx - (st.empty() ? -1 : st.top().second);

        // push
        st.push({price,idx});

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna