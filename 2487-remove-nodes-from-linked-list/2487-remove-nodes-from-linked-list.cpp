class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL, *curr = head, *nex;
        while(curr){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode *rev = head;
        // finding previous greater element of reversed list equivalent to next greater element of give list
        vector<int> pge;
        stack<int> st;
        while(rev){
            while(!st.empty() && st.top() <= rev->val) st.pop();
            pge.push_back(st.empty() ? -1 : st.top());
            st.push(rev->val);
            rev = rev->next;
        }

        head = reverse(head);
        ListNode *dummy = new ListNode(108);
        ListNode *temp = dummy;
        for(int i=pge.size()-1;i>=0;i--){
            if(pge[i] == -1){
                temp->next = head;
                temp = temp->next;
            }
            head = head->next;
        }

        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna