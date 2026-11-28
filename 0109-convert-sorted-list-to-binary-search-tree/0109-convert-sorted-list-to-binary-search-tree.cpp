class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        // base case
        if(!head) return nullptr;

        // handling single node
        if(!head->next) return new TreeNode(head->val);

        // finding middle (keeping prev for separation)
        ListNode *slow = head,*fast = head,*prev = head;
        while(fast && fast->next){
            if(slow != head) prev = prev->next;
            slow = slow->next;
            fast = fast->next->next;
        }

        // forming node for BST
        TreeNode *root = new TreeNode(slow->val);

        // separating list for Binary search 
        prev->next = nullptr;

        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);

        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna