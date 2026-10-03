class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(108);
        ListNode *temp = ans;
        int carry = 0;

        while(l1 || l2 || carry){
            int sum = carry;

            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            sum = sum % 10;

            ListNode *newNode = new ListNode(sum);
            temp->next = newNode;
            temp = temp->next;
        }

        return ans->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna