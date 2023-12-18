class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int n=s.length();
        int i=n-1;
         // Traverse the string from the end, skipping any trailing spaces.
        while(i>=0 && s[i]==' ')
        {
            i--;
        }
        // Count the characters of the last word.
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
        
    }
};