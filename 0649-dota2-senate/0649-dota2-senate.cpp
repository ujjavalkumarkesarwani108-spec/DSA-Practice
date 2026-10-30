class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        deque<char> dq;
        int Rcount = 0, Dcount = 0;
        for(char ch : senate){
            dq.push_back(ch);
            if(ch == 'R') Rcount++;
            else Dcount++;
        }

        while(Dcount && Rcount){
            char enemy = (dq.front() == 'R') ? 'D' : 'R';
            int c = 0;
            while(dq.front() != enemy){
                dq.push_back(dq.front());
                dq.pop_front();
                c++;
            }
            dq.pop_front();
            enemy == 'R' ? Rcount-- : Dcount--;
            while(--c){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

        if(Dcount) return "Dire";
        else return "Radiant";
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna