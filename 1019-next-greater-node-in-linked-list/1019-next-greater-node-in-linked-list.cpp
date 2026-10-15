class Solution {
public:
    void solve(ListNode *head,vector<int>& ans,stack<int>& st){
        if(!head->next){
            st.push(head->val);
            ans.push_back(0);
            return;
        }
        solve(head->next,ans,st);
        //pop
        while(!st.empty() && st.top() <= head->val){
            st.pop();
        }

        //ans
        ans.push_back(st.empty() ? 0 : st.top());

        //push
        st.push(head->val);
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<int> st;
        solve(head,ans,st);
        
        reverse(ans.begin(),ans.end());
        return ans;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna