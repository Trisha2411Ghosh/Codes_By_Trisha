class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        long long wait=customers[0][1];
        long long finished_prev=customers[0][0]+customers[0][1];
        for(int i=1;i<n;i++){
            vector<int> time = customers[i];
            int arrive = time[0];
            long long start_cook = max((long long)arrive,finished_prev);
            long long end = start_cook+time[1];
            finished_prev=end;
            wait+=end-arrive;
        }
        return (double)wait/n;
    }
};