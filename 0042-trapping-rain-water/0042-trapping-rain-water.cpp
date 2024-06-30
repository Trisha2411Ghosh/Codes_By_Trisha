class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0 ;
        int r = n-1;
        int leftmax = 0 ;
        int rightmax = 0 ;
        int res = 0 ;

        while (l<r){
            if(height[l] <= height[r]){
                if (leftmax < height[l]){
                    leftmax = height[l];
                }
                else{
                    res += (leftmax - height[l]);
                }
                l++;
            }
            else{
                if (rightmax <= height[r]){
                    rightmax = height[r];
                }
                else{
                    res += (rightmax - height[r]);
                }
                r--;
            }
        }
        return res;

        // int left = 0;
        // int right = height.size() - 1;
        // int leftMax = height[left];
        // int rightMax = height[right];
        // int water = 0;

        // while (left < right) {
        //     if (leftMax < rightMax) {
        //         left++;
        //         leftMax = max(leftMax, height[left]);
        //         water += leftMax - height[left];
        //     } else {
        //         right--;
        //         rightMax = max(rightMax, height[right]);
        //         water += rightMax - height[right];
        //     }
        // }

        // return water;
    }
};