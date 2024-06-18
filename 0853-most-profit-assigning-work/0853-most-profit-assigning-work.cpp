class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {

        int n=difficulty.size();
        vector<pair<int,int>> jobs;
        for(int i=0;i<n;i++){
            jobs.push_back(make_pair(difficulty[i],profit[i]));
        }
        sort(jobs.begin(),jobs.end());
        sort(worker.begin(),worker.end());

        int bestprofit=0,maxprofit=0,j=0;
        int m=worker.size();
        for(int i=0;i<m;i++){
            while(j<n && worker[i]>=jobs[j].first){
                bestprofit=max(bestprofit,jobs[j].second);
                j++;
            }
            maxprofit+=bestprofit;
        }
        return maxprofit;
    //     int maxprofit=0;
    //     int d=difficulty.size();
    //     int p=profit.size();
    //     int w=worker.size();
    //     for(int i=0,k=0;i<d,k<p;i++,k++){
    //         for(int j=0;j<w;j++){
    //             if(worker[j]>=difficulty[i]){
    //                 maxprofit+=profit[k];
    //             }
    //         }
    //     }
    //     return maxprofit;
    }
};