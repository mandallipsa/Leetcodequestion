class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqtable[256]={0};
        for(int i=0;i<s.size();i++)
        {
            freqtable[s[i]]++;
        }//O(n)
        for(int i=0;i<t.size();i++)
        {
            freqtable[t[i]]--;
        }//O(m)
        for(int i=0;i<256;i++)
        {
            if(freqtable[i]!=0)
            {
                return false;
            }
        }//O(256)
        return true;

        
    }
};