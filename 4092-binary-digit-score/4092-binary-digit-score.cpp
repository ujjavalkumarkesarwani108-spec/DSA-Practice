class Solution {
public:
    int setcount(int num){
        int count = 0;
        while(num){
            count++;
            num = (num & (num-1));
        }
        return count;
    }
    int calculateScore(int a, int b) {
        int s1 = setcount(a);
        int s2 = setcount(b);

        if(s1>=s2) return s1*s2;
        return s2/s1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna