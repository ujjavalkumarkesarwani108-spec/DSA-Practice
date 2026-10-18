class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int i = 0, j = 0;
        int prev_i, prev_j;
        while(i>=0 && i<m && j>=0 && j<n){
            if(grid[i][j] != 'v'){
                prev_i = i;
                prev_j = j;
            }
            char move = grid[i][j];
            grid[i][j] = 'v';           // marking visited
            if(move == 'R') j++;
            else if(move == 'D') i++;
            else if(move == 'U') i--;
            else if(move == 'L') j--;
            else return {prev_i,prev_j};
        }
        return {prev_i,prev_j};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna