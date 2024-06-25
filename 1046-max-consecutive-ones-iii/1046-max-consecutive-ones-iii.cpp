class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n=nums.size();
        int l=0,r=0;
        int maxlen=0;
        int zeros=0;
        while(r<n){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
            if(zeros<=k){
                int len=r-l+1;
                maxlen=max(maxlen,len);
            }
            r++;
        }
        return maxlen;
        // int n=nums.size();
        // int maxlen=0;
        // for(int i=0;i<n;i++){
        //     int zeros=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]==0){
        //             zeros++;
        //         }
        //         if(zeros<=k){
        //             int len = j-i+1;
        //             maxlen=max(maxlen,len);
        //         }else{
        //             break;
        //         }
        //     }
        // }
        // return maxlen;
    }
};