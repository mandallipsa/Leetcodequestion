class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     unordered_map<int,int>mp;
     for(auto it :arr) {
         mp[it]++;
     } 
    unordered_set<int>s;
    for(auto it : mp){
        int freq = it.second;
        if(s.find(freq)!=s.end())
        return false;
        s.insert(freq);
        }
        return true;
    }
};