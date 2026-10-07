class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *prev = head;
        ListNode *curr = head->next;
        ListNode *Next = head->next->next;

        int d1 = 0, d2 = 0, mind = INT_MAX, maxd = 0, cp = 0;
        while(Next){
            if((curr->val < prev->val && curr->val < Next->val) || (curr->val > prev->val && curr->val > Next->val)){
                if(cp == 0){
                    cp++;
                }
                else{
                    mind = min(mind, d2);
                    maxd = max(maxd, d1);
                    d2 = 0;
                    cp++;
                }
            }
            if(cp > 0){
                d1++;
                d2++;
            }
            prev = prev->next;
            curr = curr->next;
            Next = Next->next;
        }
        if(mind == INT_MAX || maxd == 0) return {-1,-1};
        return {mind,maxd};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna