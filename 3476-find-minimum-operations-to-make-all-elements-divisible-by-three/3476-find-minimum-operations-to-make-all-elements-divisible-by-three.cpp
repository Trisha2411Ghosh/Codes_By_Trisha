class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int minoperation = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%3!=0){
                minoperation++;
            }
        }
        return minoperation;
        
    }
};