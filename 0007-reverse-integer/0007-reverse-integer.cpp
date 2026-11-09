class Solution {
public:
    int reverse(int x) {
        long long n = x;
        long long rev = 0;
        while(n){
            rev = rev*10 + n % 10;
            n /= 10;
            if(rev > INT_MAX  || rev < INT_MIN) return 0;
        }

        return (int)rev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna