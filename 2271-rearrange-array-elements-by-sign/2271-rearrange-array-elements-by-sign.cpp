#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos , neg;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int posIndex = 0, negIndex = 0;
        for(int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = pos[posIndex++];
            } else {
                nums[i] = neg[negIndex++];
            }
        }
        return nums;
    }
};