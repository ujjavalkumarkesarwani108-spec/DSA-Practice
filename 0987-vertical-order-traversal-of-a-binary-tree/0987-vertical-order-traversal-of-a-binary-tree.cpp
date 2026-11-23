class Solution {
public:
    void horLevel(TreeNode *root,int &minlevel,int &maxlevel,int level){
        if(!root) return;
        minlevel = min(minlevel,level);
        maxlevel = max(maxlevel,level);
        horLevel(root->left,minlevel,maxlevel,level-1);
        horLevel(root->right,minlevel,maxlevel,level+1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int minlevel = 0, maxlevel = 0;
        horLevel(root,minlevel,maxlevel,0);

        int horlevels = maxlevel - minlevel + 1;
        
        // to store {row,node->val}
        vector<vector<pair<int,int>>> cols(horlevels);

        // to store {node,{cols.idx/hd,row}}
        queue<pair<TreeNode*,pair<int,int>>> q;

        q.push({root,{-minlevel,0}});

        while(!q.empty()){
            auto [temp,x] = q.front();
            q.pop();

            auto [hd,row] = x;
            
            cols[hd].push_back({row,temp->val});

            if(temp->left) q.push({temp->left,{hd - 1, row + 1}});
            if(temp->right) q.push({temp->right,{hd + 1,row + 1}});
        }

        vector<vector<int>> result(horlevels);
        for(int i=0;i<horlevels;i++){
            // sorts primarily by row and in case of tie by value
            sort(cols[i].begin(),cols[i].end());
            for(auto [row,val] : cols[i]){
                result[i].push_back(val);
            }
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna