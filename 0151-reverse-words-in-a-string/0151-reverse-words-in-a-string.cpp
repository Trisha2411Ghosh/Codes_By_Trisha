#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack <string> st;
        string ans = "";
        string word = "";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(word.length()>0){
                    st.push(word);
                    st.push(" ");
                    word="";
                }
            }else{
                    word=word+s[i];
                }
            }
            ans=ans+word;
            while(!st.empty()){
                ans+=(st.top());
                st.pop();
            }
            if(ans.length()!=0 && ans[0]==' '){
                ans=ans.substr(1);
            }
        //     string word = "";
        //     while(s[i]!=' ' && i<n){
        //         word+=s[i];
        //         i++;
        //     }
        //         st.push(word);
        //         st.push(" ");
        //     }
        // }
        // while(!st.empty()){
        //     ans+=(st.top());
        //     st.pop();
        // }
        return ans;
    }
};