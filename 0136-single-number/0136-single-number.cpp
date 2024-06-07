class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xorr=0;
        for(int i=0;i<n;i++){
            // for(int j=0;j<n;j++){
            //     if(nums[i]==nums[j]){
            //        j++; 
            //     }
            //     else{
            //         return nums[j];
            //     }
            // }
            xorr=xorr^nums[i];
        }
        return xorr;
    }
};