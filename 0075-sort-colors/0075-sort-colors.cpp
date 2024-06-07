class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(nums[i]>nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};