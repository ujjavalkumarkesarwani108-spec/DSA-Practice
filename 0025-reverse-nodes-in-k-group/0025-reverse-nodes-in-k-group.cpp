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
    ListNode *findKthNode(ListNode *temp, int k){
        k--;
        while(temp && k){
            temp = temp->next;
            k--;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head, *kthNode, *nextNode, *prevNode = NULL;
        while(temp){
            kthNode = findKthNode(temp,k);
            if(kthNode == NULL){
                if(prevNode) prevNode->next = temp;
                break;
            }
            nextNode = kthNode->next;
            kthNode->next = NULL;
            kthNode = reverse(temp);
            if(temp == head){
                head = kthNode;
            }
            else{
                prevNode->next = kthNode;
            }
            prevNode = temp;
            temp = nextNode;
        }

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna