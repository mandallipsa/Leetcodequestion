class Solution {
public:
    string frequencySort(string s) {
       vector<pair<char,int>>v(123);
       for(char & ch:s){
           int freq=v[ch].second;
           v[ch]={ch,freq+1};
       }
       string result="";
       auto lambda=[&](pair<char,int>&p1,pair<char,int>&p2){
           return p1.second>p2.second;
       };
       sort(v.begin(),v.end(),lambda);
       for(int i=0;i<=122;i++){
           int freq=v[i].second;
           char ch=v[i].first;
           string temp=string(freq,ch);
           result+=temp;
       }
       return result;
    }
};