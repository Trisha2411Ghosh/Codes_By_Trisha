class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count =1;
        int longestcount=1;
        for(int i=1;i<n;i++){
            if (nums[i] != nums[i - 1]) {  // Ignore duplicates
                if (nums[i] == nums[i - 1] + 1) {
                    count++;
                } else {
                    longestcount = max(longestcount, count);
                    count = 1;
                }
            }
        }
        longestcount = max(longestcount, count);
        return longestcount;
    }
};