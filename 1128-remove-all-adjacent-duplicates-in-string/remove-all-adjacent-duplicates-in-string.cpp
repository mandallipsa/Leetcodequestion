class Solution {
public:
    string removeDuplicates(string s) {
    string result ="" ;
    int i =0;
    while(i<s.length()){
        if(result.length()>0 && result[result.length()-1]==s[i]){
            result.pop_back();
        }
        else{
            result.push_back(s[i]);
        }
        i++;
    }
    return result;
    }
};