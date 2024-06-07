class Solution {
public:
    bool check(vector<int>& nums) {
        int len=nums.size();
        int count=0;
        if(nums[0]<nums[len-1])
        {
            count=1;
        }
        for(int i=0; i<len-1; i++)
        {
            if(nums[i]>nums[i+1])
            {
                count++;
                if(count>1)
                    return false;  
            }
        }
        return true;
    }
};