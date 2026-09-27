class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL, *curr = head, *Next;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        ListNode *dummy = new ListNode(108);
        dummy->next = head;
        ListNode *t1 = dummy;
        for(int i=1;i<left;i++){
            t1 = t1->next;
        }

        ListNode *t2 = t1->next;
        for(int i=left;i<right;i++){
            t2 = t2->next;
        }

        ListNode *t3 = t2->next;
        t2->next = NULL;

        
        ListNode *midList = reverse(t1->next);
        t1->next->next = t3;
        t1->next = midList;

        return dummy->next;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna