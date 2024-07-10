class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n =nums.size();
        int x;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
            else if(target<nums[0]){
                return 0;
            }
            else if(target>nums[n-1]){
                return n;
            }
            else if(target>nums[i] && target<nums[i+1]){
                x=i+1;
            }
        }
        return x;
    }
};