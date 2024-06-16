// class Solution {
// public:
//     long long countCompleteDayPairs(vector<int>& hours) {
//         int n = hours.size();
//         long long count = 0;
//         for(int i=0;i<n;i++){
//             for(int j= i+1;j<n;j++){
//                 if((hours[i]+hours[j])%24==0){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };


class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long remainderCount[24] = {0};
        long long count = 0;

        for(int i = 0; i < hours.size(); i++){
            long long remainder = hours[i] % 24;
            remainderCount[remainder]++;
        }

        count += (remainderCount[0] * (remainderCount[0] - 1)) / 2;  
        count += (remainderCount[12] * (remainderCount[12] - 1)) / 2;
        for(int i = 1; i < 12; i++) {
            count += remainderCount[i] * remainderCount[24 - i];
        }

        return count;
    }
};
