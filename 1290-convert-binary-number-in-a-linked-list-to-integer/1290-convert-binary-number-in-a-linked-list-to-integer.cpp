class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string num = "";
        while(head){
            num += to_string(head->val);
            head = head->next;
        }
        reverse(num.begin(),num.end());
        int ans = 0;
        int mf = 1;        // multiplying factor
        for(char ch : num){
            ans += (ch-'0') * mf;
            mf *= 2;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna