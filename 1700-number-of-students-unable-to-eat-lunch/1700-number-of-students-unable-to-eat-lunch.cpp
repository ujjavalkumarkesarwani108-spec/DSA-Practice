class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int i = 0,j = 0;
        while(students.size()){
            if(students[i] == sandwiches[j]){
                students.erase(students.begin());
                j++;
            }
            else{
                int idx = 0;
                while(students[i] != sandwiches[j] && idx < students.size()){
                    
students.insert(students.begin(),students[students.size()-1]);
                students.pop_back();
                    idx++;
                }
                if(idx == students.size()) return idx;
            }
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna