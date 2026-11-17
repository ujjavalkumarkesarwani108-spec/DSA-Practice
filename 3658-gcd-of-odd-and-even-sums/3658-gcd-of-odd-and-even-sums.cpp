class Solution {
public:
    int computeGCD(int a,int b){
        if(a==0) return b;
        return computeGCD(b%a,a);
    }
    int gcdOfOddEvenSums(int n) {
        int sumEven = n*(n+1);
        int sumOdd = sumEven - n;
        return computeGCD(sumOdd,sumEven);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna