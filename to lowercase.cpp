class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
           if(s[i]>='A'  && s[i]<='Z'){
            s[i]=s[i]+32;//H+32=h, E+32=e, L+32=l, O+32=o etc.....
           }
        }
        return s;
    }
};
