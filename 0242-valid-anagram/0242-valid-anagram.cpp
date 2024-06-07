#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length()!=t.length()) return false;
        // unordered_map <char,int> smp;
        // unordered_map <char,int> tmp;
        // for(int i=0;i<s.length();i++){
        //     smp.first
        // }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};