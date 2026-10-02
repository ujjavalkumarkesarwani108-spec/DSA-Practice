class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *dummy = new ListNode(108);
        ListNode *ptr1 = head, *ptr2 = dummy;
        while(ptr1 && ptr1->next){
            ptr2->next = ptr1->next;
            ptr1->next = ptr1->next->next;
            ptr2 = ptr2->next;
            if(ptr1->next) ptr1 = ptr1->next;
        }
        ptr2->next = NULL;
        ptr1->next = dummy->next;

        return head;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna