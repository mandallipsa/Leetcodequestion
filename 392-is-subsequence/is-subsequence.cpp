class Solution {
public:
    bool isSubsequence(string s, string t) {
       int n1=s.size();
       int n2=t.size();
       if(n1==0){
           return true;
       }
       int i=0,j=0;
       while(j<n2){
           if(s[i]==t[j]){
               i++;
               if(i==n1){
                   return true;
               }
           }
           j++;
       }
       return false;
    }
};