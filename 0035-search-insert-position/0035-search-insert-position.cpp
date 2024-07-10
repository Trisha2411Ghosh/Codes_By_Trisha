class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return left;

        // int n =nums.size();
        // int x;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==target){
        //         return i;
        //     }
        //     else if(target<nums[0]){
        //         return 0;
        //     }
        //     else if(target>nums[n-1]){
        //         return n;
        //     }
        //     else if(target>nums[i] && target<nums[i+1]){
        //         x=i+1;
        //     }
        // }
        // return x;
    }
};