class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int size = nums.size();
        vector<vector<int>> dp(size, vector<int>(k, 1)); 
        
        fillTable(nums, k, dp); 
        
        return findMaxLength(dp); 
    }
    
private:
    void fillTable(vector<int>& nums, int k, vector<vector<int>>& dp) {
        int size = nums.size();
        
        for (int current = 0; current < size; ++current) {
            for (int previous = 0; previous < current; ++previous) {
                int modSum = (nums[current] + nums[previous]) % k;
                dp[current][modSum] = max(dp[current][modSum], dp[previous][modSum] + 1);
            }
        }
    }
    
    int findMaxLength(vector<vector<int>>& dp) {
        int maxLen = 0;
        for (auto& row : dp) {
            for (int length : row) {
                maxLen = max(maxLen, length);
            }
        }
        return maxLen;
    }
};
