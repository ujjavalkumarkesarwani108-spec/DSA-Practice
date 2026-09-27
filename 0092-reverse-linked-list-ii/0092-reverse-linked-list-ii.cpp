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
        ListNode *a, *b, *c, *d, *temp = head;
        a = b = c = d = NULL;
        int n = 1;
        while(temp){
            if(n==left-1) a = temp;
            if(n==left) b = temp;
            if(n==right) c = temp;
            if(n==right+1) d = temp;
            temp = temp->next;
            n++;
        }

        if(a) a->next = NULL;
        c->next = NULL;

        c = reverse(b);
        if(a) a->next = c;
        b->next = d;

        if(a) return head;
        return c;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna