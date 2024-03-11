class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>index(26,-1);
        for(int i=0; i<order.length();i++){
            char ch = order[i];
            index [ch-'a'] = i;
        }
         auto myComparator =[&index](char &ch1,char&ch2){
             return index[ch1-'a']<index[ch2-'a'];
         };
      sort(s.begin(),s.end(),myComparator);
      return s;
        
    }
};