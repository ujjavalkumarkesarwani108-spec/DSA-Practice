class Solution {
public:
    string digitSum(string s, int k) {
        if(s.length() <= k) return s;

        while(s.length() > k){
            int temp = 0;
            string aux = "";
            int len = 0;
            for(int i=0;i<s.length();i++){
                if(len < k){
                    temp += s[i] - '0';
                    len++;
                }
                else{
                    len = 1;
                    aux += to_string(temp);
                    temp = s[i] - '0';
                }
            }
            if(len) aux += to_string(temp);
            s = aux; 
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna