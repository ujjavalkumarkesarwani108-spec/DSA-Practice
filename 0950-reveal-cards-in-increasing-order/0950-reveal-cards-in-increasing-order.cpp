class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        vector<int> ans(n);

        int i = 0, j = 0;
        bool alternate = true;

        while(i < n){
            if(ans[j] == 0){
                if(alternate){
                    ans[j] = deck[i++];
                }
                alternate = !alternate;
            }
            j = (j+1) % n;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna