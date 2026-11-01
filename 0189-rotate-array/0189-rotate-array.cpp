class Solution {
public:
    void reversePart(int i,int j,vector<int> &a){
        while(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int n = nums.size() - 1;
        reversePart(0,n-k,nums);
        reversePart(n-k+1,n,nums);
        reversePart(0,n,nums);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna