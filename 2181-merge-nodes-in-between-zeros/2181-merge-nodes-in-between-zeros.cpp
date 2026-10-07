class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        ListNode *temp = head;
        while(temp && temp->next){
            if(temp->next->val == 0){
                temp->next = temp->next->next;
                temp = temp->next;
            }
            else{
                temp->val += temp->next->val;
                temp->next = temp->next->next;
            }
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna