class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string start = max(arriveAlice,arriveBob);
        string end = min(leaveAlice,leaveBob);

        int stm = stoi(start.substr(0,2));
        int stt = stoi(start.substr(3));

        int enm = stoi(end.substr(0,2));
        int ent = stoi(end.substr(3));

        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // making prefix sum days
        for(int i=1;i<12;i++){
            days[i] += days[i-1];
        }

        int sd = stm > 1 ? days[stm-2] + stt : stt;
        int ed = enm > 1 ? days[enm-2] + ent : ent;

        int ans = ed - sd + 1;
        if(ans > 0) return ans;
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna