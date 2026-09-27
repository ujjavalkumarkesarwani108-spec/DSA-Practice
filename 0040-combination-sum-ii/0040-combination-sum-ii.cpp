class Solution {
public:
    void solve(vector<int>& candidates, int target, int i, vector<vector<int>>& ans, vector<int>& temp){
        // base case 1
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        //base case 2
        if(i == candidates.size())
            return;

        if(candidates[i] <= target){
            temp.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i+1,ans,temp);
            temp.pop_back();

            //skip duplicates 
            while(i+1 < candidates.size() && candidates[i] == candidates[i+1]){
                i++;
            }
        }

        // current element greater than target
        solve(candidates,target,i+1,ans,temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;

        solve(candidates,target,0,ans,temp);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna