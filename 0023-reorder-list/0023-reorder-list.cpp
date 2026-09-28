class Solution {
public:
    ListNode *reverse(ListNode *head){
        if(!head->next) return head;
        ListNode *newList = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newList;
    }
    void reorderList(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *revList = reverse(slow);

        while(revList->next){
            ListNode *Next = head->next;
            head->next = revList;
            
            revList = revList->next;
            head = head->next;

            head->next = Next;
            head = head->next;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna