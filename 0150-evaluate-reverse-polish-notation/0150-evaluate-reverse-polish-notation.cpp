class Solution {
public:
    int calcAns(int val1,char op,int val2){
        switch(op){
            case '+':
                return val1 + val2;
            case '-':
                return val1 - val2;
            case '*':
                return val1 * val2;
            case '/':
                return val1 / val2;
        }
        return 108;
    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> val;

        for(int i=0;i<n;i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                char op = tokens[i][0];
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();

                int ans = calcAns(val1,op,val2);
                val.push(ans);
            }
            else{
                val.push(stoi(tokens[i]));
            }
        }
        return val.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna