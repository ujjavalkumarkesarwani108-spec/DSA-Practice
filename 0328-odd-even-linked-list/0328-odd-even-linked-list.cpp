class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *dummy1 = new ListNode(108);        
        ListNode *dummy2 = new ListNode(108);        
        ListNode *t1 = dummy1, *t2 = dummy2, *temp = head;
        int x = 1;
        while(temp){
            if(x%2){
                t1->next = temp;
                t1 = t1->next;
            }
            else{
                t2->next = temp;
                t2 = t2->next;
            }
            x++;
            temp = temp->next;
        }
        t1->next = dummy2->next;
        t2->next = nullptr;

        return dummy1->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna