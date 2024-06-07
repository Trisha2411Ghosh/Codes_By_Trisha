#include<bits/stdc++.h>
class Solution {
public:
    stack <char> st;
    bool isValid(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }
                char c = st.top();
                st.pop();
                if((s[i]==')' && c=='(') || (s[i]=='}' && c=='{') || (s[i]==']' && c=='[')){
                    continue;
                }else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};