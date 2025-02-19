class Solution {
public:
    bool isAnagram(string s, string t) {
    // unordered_map<char,int> hash;
    // for(int i=0;i<s.length();i++){
    //     hash[s[i]]++;
    // }
    // for(int i =0;i<t.length();i++){
    //     hash[t[i]]--;
    // }
    // for(auto i : hash){
    //     if(i.second !=0){
    //         return false;
    //     }
    // }
    // return true;
    int freqTable[256]={0};
    for(int i=0;i<s.length();i++){
        freqTable[s[i]]++;
    }
    for(int i=0;i<t.length();i++){
        freqTable[t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freqTable[i]!=0)
        return false;
    }
    return true;
    }
};