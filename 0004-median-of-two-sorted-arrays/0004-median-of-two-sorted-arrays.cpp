class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m+n;
        int prev, curr;

        int i=0,j=0;
        for(int k=0;k<=total/2;k++){
            prev = curr;
            if(i<m && (j>=n || nums1[i] <= nums2[j])){
                curr = nums1[i++];
            }
            else curr = nums2[j++];
        }

        if(total % 2 == 0) return (double)(prev+curr)/2;
        else return (double)curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna