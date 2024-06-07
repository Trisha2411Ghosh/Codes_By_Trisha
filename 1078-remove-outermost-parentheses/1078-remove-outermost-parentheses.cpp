#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        // stack <char> st;
        // string ans ="";
        // int n= s.length();
        // for(int i=0;i<n;i++){
        //     if(s[i]=='('){
        //         if(st.empty()){
        //             st.push(s[i]);
        //         }
        //         else{
        //             st.push(s[i]);
        //             ans+=(s[i]);
        //         }
        //     }else{
        //         st.pop();
        //         if(!st.empty()){
        //             ans+=(s[i]);
        //         }
        //     }
        // }
        // return ans;

        int count=0;
        string ans ="";
        int n= s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(count==0){
                    count++;
                }
                else{
                    count++;
                    ans+=(s[i]);
                }
            }else{
                count--;
                if(count!=0){
                    ans+=(s[i]);
                }
            }
        }
        return ans;
    }
};