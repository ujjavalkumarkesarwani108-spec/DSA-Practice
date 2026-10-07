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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode *temp = head;
        ListNode *startNode = head;
        int group = 1;
        int count = 0;
        while(temp){
            if((count==0 && group%2==0) || (count!=0 && temp->next == NULL && (group-count)%2==0)){
                ListNode *nextNode = temp->next;
                ListNode *aux = startNode->next;
                temp->next = NULL;
                startNode->next = reverse(startNode->next);
                startNode = aux;
                startNode->next = nextNode;
                temp = nextNode;
            }
            else if(count==0 && group%2 != 0){
                startNode = temp;
                temp = temp->next;
            }
            if(count == 0){
                group++;
                count = group-1;
            }
            
            if(temp) temp = temp->next;
            count--;

        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna