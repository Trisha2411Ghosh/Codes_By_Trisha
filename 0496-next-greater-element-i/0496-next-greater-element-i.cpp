#include<bits/stdc++.h>

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> st;
        unordered_map<int, int> nextGreaterMap;
        vector<int>result(nums1.size());
        int n=nums2.size();
        for(int i = nums2.size() - 1; i >= 0; --i){
            while(!st.empty() && st.top()<nums2[i]){
                st.pop();
            }
            nextGreaterMap[nums2[i]] = st.empty() ? -1 : st.top();
            st.push(nums2[i]);
        }
        for (int i = 0; i < nums1.size(); ++i) {
            result[i]=nextGreaterMap[nums1[i]];
        }
        return result;
    }
};