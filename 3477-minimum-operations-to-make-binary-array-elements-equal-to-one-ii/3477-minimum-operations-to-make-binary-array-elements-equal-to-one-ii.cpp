class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if ((count % 2 == 0 && nums[i] == 0) || (count % 2 == 1 && nums[i] == 1)) {
                count++;
            }
                // for (int j = i; j < n; j++) {
                //     nums[j] = 1 - nums[j];
                // }
            //}
        }
        return count;
    }
};