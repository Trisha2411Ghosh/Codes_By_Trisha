class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0, oddCount = 0, result = 0;
        unordered_map<int, int> countMap;
        countMap[0] = 1;  // To handle the case when there are exactly k odd numbers from the start

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                oddCount++;
            }
            if (countMap.find(oddCount - k) != countMap.end()) {
                result += countMap[oddCount - k];
            }
            countMap[oddCount]++;
        }
        
        return result;
    }
};


// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int n=nums.size();
//         int count=0;
//         int nice=0;
//         int l=0,r=0;
//         while(r<n){
//             if(nums[r]%2!=0){
//                 count++;
//             }
//             r++;
//             if(count==k){
//                     nice++;
//                 }
//         }
//         return nice;
//     }
// };