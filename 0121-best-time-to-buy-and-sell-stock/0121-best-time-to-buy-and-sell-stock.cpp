#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min = INT_MAX;
        int max=0;
        for (int i=0;i<n;i++) {
            if (prices[i] < min) {
                min = prices[i];
            } else if (prices[i] - min > max) {
                max = prices[i] - min;
            }
        } 
        return max;
    }
};
        // for(int i=0;i<n;i++){
        //     if(prices[i]<min){
        //         min=prices[i];
        //     }
        // }
        // buyp=min;
        // for(int i=0;i<n;i++){
        //     if(prices[i]>max){
        //         max=prices[i];
        //     }
        // }
        // sellp=max;
        // int prof=sellp-buyp;
        // return prof;
