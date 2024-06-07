#include<bits/stdc++.h>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    // int xor1=0,xor2=0;
    // int N = nums.size();
    // int n = N-1;
    // for(int i=0;i<n;i++){
    //     xor2=xor2^nums[i];
    //     xor1=xor1^(i+1);
    // }
    // xor1=xor1^N;
    // return xor1^xor2;
    // }
    int n = nums.size();
    int sum = (n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n;i++){
        s2+=nums[i];
    }
    return (sum-s2);
    }
};