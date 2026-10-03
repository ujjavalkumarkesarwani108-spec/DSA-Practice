class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *prev = nullptr, *curr = head, *Next;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *mid = reverse(slow);
        int ans = 0;
        while(mid){
            int sum = head->val + mid->val;
            ans = max(ans, sum);
            head = head->next;
            mid = mid->next;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna