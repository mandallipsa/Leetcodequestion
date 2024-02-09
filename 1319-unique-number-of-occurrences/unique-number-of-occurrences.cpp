class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     vector<int>v(2001,0);
     for(auto it : arr){
         v[it+1000]++;
     }
     sort(v.begin(),v.end());
     for(int i = 0;i<=2000;i++){
         if( v[i]!=0 && v[i]==v[i-1])
         return false;
     }
     return true;

    }
};