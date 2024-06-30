class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int maxLength = INT_MIN;
        int flag = 0; // Indicates the current expected parity (0 or 1)
        int n = nums.size();
        int currentLength = 0;

        // First pass: Check alternating pattern starting with flag = 0
        for (int i = 0; i < n; ++i) {
            if (nums[i] % 2 == flag) {
                currentLength++;
                flag = 1 - flag; // Toggle flag (0 to 1 or 1 to 0)
            }
        }
        maxLength = max(maxLength, currentLength);

        // Second pass: Check alternating pattern starting with flag = 1
        flag = 1;
        currentLength = 0;
        for (int i = 0; i < n; ++i) {
            if (nums[i] % 2 == flag) {
                currentLength++;
                flag = 1 - flag; // Toggle flag (0 to 1 or 1 to 0)
            }
        }
        maxLength = max(maxLength, currentLength);

        // Third pass: Count consecutive elements with parity 0
        flag = 0;
        currentLength = 0;
        for (int i = 0; i < n; ++i) {
            if (nums[i] % 2 == flag) {
                currentLength++;
            }
        }
        maxLength = max(maxLength, currentLength);

        // Fourth pass: Count consecutive elements with parity 1
        flag = 1;
        currentLength = 0;
        for (int i = 0; i < n; ++i) {
            if (nums[i] % 2 == flag) {
                currentLength++;
            }
        }
        maxLength = max(maxLength, currentLength);

        return maxLength;
    }
};
