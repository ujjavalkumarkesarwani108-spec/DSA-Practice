class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode *dummy = new ListNode(108);
        dummy->next = head;
        ListNode *temp = head->next, *prev, *curr, *unsorted_list;
        head->next = NULL;
        while(temp){
            unsorted_list = temp->next;
            prev = dummy;
            curr = dummy->next;
            while(curr && curr->val < temp->val){
                curr = curr->next;
                prev = prev->next;
            }
            prev->next = temp;
            temp->next = curr;
            temp = unsorted_list;
        }
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna