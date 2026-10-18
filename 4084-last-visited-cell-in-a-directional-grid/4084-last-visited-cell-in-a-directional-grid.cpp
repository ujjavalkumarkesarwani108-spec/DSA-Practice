class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int i = 0, j = 0;
        int prev_i, prev_j;
        char ch;
        while(i>=0 && i<m && j>=0 && j<n){
            if(grid[i][j] != 'v'){
                prev_i = i;
                prev_j = j;
            }
            ch = grid[i][j];
            grid[i][j] = 'v';
            if(ch == 'R') j++;
            else if(ch == 'D') i++;
            else if(ch == 'U') i--;
            else if(ch == 'L') j--;
            else if(ch == 'v'){
                return {prev_i,prev_j};
            }
        }
        if(i==-1) return {i+1,j};
        else if(i==m) return {i-1,j};
        else if(j==-1) return {i,j+1};
        else return {i,j-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna