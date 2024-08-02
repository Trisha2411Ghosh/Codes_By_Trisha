class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(int i=0;i<n;i++){
            if (details[i].length() == 15) {
                int age = stoi(details[i].substr(11, 2));
                if (age > 60) {
                    count++;
                }
            }
        }
        return count;
    }
};