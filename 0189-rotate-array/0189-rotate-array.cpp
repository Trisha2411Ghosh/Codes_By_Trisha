class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        // reverse(nums.begin()+(n-k),nums.end());
        // reverse(nums.begin(),nums.end()-k);
        // reverse(nums.begin(),nums.end());
        vector<int>temp(nums.size());
        for(int i=0;i<n;i++){
            temp[(i+k) % n]=nums[i];
        }
        nums=temp;
    }
};