#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m){
            return false;
        }
        else{
            unordered_map<char,char> m1 ,m2;
            for(int i=0;i<s.length();i++){
                if(m1.find(s[i])==m1.end() && m2.find(t[i])==m2.end()){
                    m1[s[i]]=t[i];
                    m2[t[i]]=s[i];
                }
                else if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i]){
                    return false;
                }
            }
            return true;
        }
    }
};