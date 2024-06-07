#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        // int n=num.length();
        // string maxi="";
        // if(num[n-1]%2!=0){
        //     return num;
        // }else{
        //     for(int i=0;i<n;i++){
        //         if(num[i]%2!=0){
        //             maxi = max(maxi,num[i]);
        //         }
        //     }
        //     return maxi;
        // }
        
        int n=num.length();
        for (int i = n - 1; i >= 0; i--) {
            if ((num[i]) % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        
        return "";
    }
};