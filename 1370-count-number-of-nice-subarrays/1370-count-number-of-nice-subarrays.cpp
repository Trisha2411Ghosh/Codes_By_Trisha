class Solution {
public:

    int helpMe(vector<int>nums,int k){
        if(k<0) return 0;
        int n=nums.size();
        int l=0,r=0,sum=0,cnt=0;
        while(r<n){
            sum+=(nums[r]%2);
            while(sum>k){
                sum-=(nums[l]%2);
                l++;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return helpMe(nums,k)-helpMe(nums,k-1);
    }
};