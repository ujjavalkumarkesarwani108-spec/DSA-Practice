class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int> q;
        queue<int> r;
        queue<int> d;
        
        for(int i=0;i<s.size();i++){
            q.push(i);
            if(s[i] == 'R') r.push(i);
            else d.push(i);
        }

        while(true){
            if(s[q.front()] == 'R'){
                if(!d.empty()){
                    s[d.front()] = 'X';
                    d.pop();

                    q.push(q.front());
                    q.pop();
                    r.push(r.front());
                    r.pop();
                }
                else return "Radiant";
            }
            else if(s[q.front()] == 'D'){
                if(!r.empty()){
                    s[r.front()] = 'X';
                    r.pop();

                    q.push(q.front());
                    q.pop();
                    d.push(d.front());
                    d.pop();
                }
                else return "Dire";
            }
            else q.pop();
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna