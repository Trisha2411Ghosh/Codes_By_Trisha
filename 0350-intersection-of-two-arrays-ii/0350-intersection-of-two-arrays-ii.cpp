class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int i = 0, j = 0;
        
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        
        return ans;

        // int n=nums1.size();
        // int m = nums2.size();
        // vector<int> ans;
        // unordered_map<int,int> count;

        // for(int i=0;i<n;i++){
        //     count[nums1[i]]++;
        // }

        // for(int j=0;j<m;j++){
        //     if(count[nums2[j]]>0){
        //         ans.push_back(nums2[j]);
        //         count[nums2[j]]--;
        //     }
        // }
        // return ans;

        // vector<int> ans;
        // int n=nums1.size();
        // int m = nums2.size();
        // vector<bool> used(n, false);
        //     for(int i=0;i<m;i++){
        //         for(int j=0;j<n;j++){
        //             if(nums1[j]==nums2[i] && !used[j]){
        //                 ans.push_back(nums1[j]);
        //                 used[j] = true;
        //                 break;
        //             }
        //         }
        //     }
        // return ans;
    }
};