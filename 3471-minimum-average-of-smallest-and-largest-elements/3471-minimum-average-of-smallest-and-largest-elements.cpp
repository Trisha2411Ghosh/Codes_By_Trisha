class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        if (n < 2) return 0; 
        sort(nums.begin(),nums.end());
        double minaverage = static_cast<double>(nums[0] + nums[n-1]) / 2;
        for(int i=1;i<n-1;i++){
            double curravg=static_cast<double>(nums[i] + nums[n-i-1]) / 2;
            if(curravg<minaverage){
                minaverage = curravg;
            }
        }
        return minaverage;
    }
};