class Solution {
public:
    int len = 0;
    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL, *curr = head, *nex;
        while(curr){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            len++;          // to  calculate length of LL
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        head = reverse(head);
        stack<int> st;
        vector<int> ans;
        while(head){
            // pop
            while(!st.empty() && st.top() <= head->val) st.pop();
            // ans
            ans.push_back(st.empty() ? 0 : st.top());
            // push
            st.push(head->val);
            head = head->next;
        }
        // reverse vector
        for(int i=0,j=ans.size()-1;i<j;i++,j--){
            swap(ans[i],ans[j]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna