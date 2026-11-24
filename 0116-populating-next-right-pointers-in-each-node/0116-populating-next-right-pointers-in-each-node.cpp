class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return nullptr;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int levelSize = q.size();

            for(int i=0;i<levelSize;i++){
                auto temp = q.front();
                q.pop();

                if(i < levelSize - 1){
                    temp->next = q.front();
                }

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }

        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna