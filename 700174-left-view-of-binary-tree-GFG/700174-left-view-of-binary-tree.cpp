/* Structure of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        if(!root) return {};
        
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int levelSize = q.size();
            
            for(int i=0;i<levelSize;i++){
                Node *temp = q.front();
                q.pop();
                
                if(i==0) ans.push_back(temp->data);
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna