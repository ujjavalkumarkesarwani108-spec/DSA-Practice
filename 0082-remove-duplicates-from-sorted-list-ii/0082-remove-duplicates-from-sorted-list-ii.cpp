class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *dummy = new ListNode(108);
        dummy->next = head;
        ListNode *prev = dummy, *curr = head;
        while(curr){
            if(curr->next && curr->val == curr->next->val){
                while(curr->next && curr->val == curr->next->val){
                    curr = curr->next;
                }
                prev->next = curr->next;
            }
            else prev = prev->next;
            curr = curr->next;
        }
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna