class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;

        int i = 0;
        while(i<n){
            if(s[i] == 'M') { ans += 1000; i++; }
            else if(i<n-1 && s[i] == 'C' && s[i+1] == 'M') { ans += 900; i+= 2; }
            else if(s[i] == 'D') { ans += 500; i++; }
            else if(i<n-1 && s[i] == 'C' && s[i+1] == 'D') { ans += 400; i+= 2; }
            else if(s[i] == 'C') { ans += 100; i++; }
            else if(i<n-1 && s[i] == 'X' && s[i+1] == 'C') { ans += 90; i += 2; }
            else if(s[i] == 'L') { ans += 50; i++; }
            else if(i<n-1 && s[i] == 'X' && s[i+1] == 'L') { ans += 40; i+= 2; }
            else if(s[i] == 'X') { ans += 10; i++; }
            else if(i<n-1 && s[i] == 'I' && s[i+1] == 'X') { ans += 9; i += 2; }
            else if(s[i] == 'V') { ans += 5; i++; }
            else if(i<n-1 && s[i] == 'I' && s[i+1] == 'V') { ans += 4; i += 2; }
            else { ans += 1; i++; }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna