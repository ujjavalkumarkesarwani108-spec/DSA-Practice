class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *dummy = new ListNode(108);
        ListNode *t = dummy,*nextNode;
        ListNode *temp = head;
        while(temp && temp->next){
            nextNode = temp->next->next;
            t->next = temp->next;
            t = t->next;
            t->next = temp;
            t = t->next;
            temp = nextNode;
        }
        // if odd length list attaching remaining one node
        t->next = temp;
        
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna