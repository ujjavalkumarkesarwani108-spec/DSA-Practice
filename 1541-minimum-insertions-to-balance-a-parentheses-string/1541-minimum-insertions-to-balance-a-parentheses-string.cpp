class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int insertion = 0;
        int opened = 0;
        for(int i=0;i<n;i++){
            if(s[i]== '('){
                opened++;
            }
            else{
                if(i<(n-1) && s[i+1] == ')'){
                    if(opened){
                        opened--;
                    }
                    else{
                        insertion++;
                    }
                    i++;
                }
                else{
                    if(opened){
                        insertion++;
                        opened--;
                    }
                    else{
                        insertion += 2;
                    }
                }
            }
        }
        while(opened){
            insertion += 2;
            opened--;
        }
        return insertion;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna