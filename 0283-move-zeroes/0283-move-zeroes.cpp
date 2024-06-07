#include<bits/stdc++.h>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    //     int n = a.size();
    //     int j =-1;
    // for(int i=0;i<n;i++){
    //     if(a[i]==0){
    //         j=i;
    //         break;
    //     }
    // }
    // if(j==-1){
    // }
    // for(int i= j+1;i<n;i++){
    //     if(a[i]!=0){
    //         swap(a[i],a[j]);
    //         j++;
    //     }
    // }
    // }
    int i=0,j=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[j]!=0){
                swap(nums[i++],nums[j++]);
            }
            else{
                j++;
            }
        }
    }
};