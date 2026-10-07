/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int len = 0;
        ListNode *temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }

        int div = len / k;
        int rem = len % k;
        temp = head;
        while(temp){
            if(rem){
                for(int i=1;i<=div;i++){
                    temp = temp->next;
                }
                rem--;
            }
            else{
                for(int i=1;i<div;i++){
                    temp = temp->next;
                }
            }
            ListNode *nextNode = temp->next;
            temp->next = NULL;
            ans.push_back(head);
            head = temp = nextNode;
            k--;
        }
        
        while(k--){
            ans.push_back(NULL);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna