class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int start = 0;
        int end = 0;

        while (end < s.length()) {
            // Find the start of a word
            while (start < s.length() && s[start] == ' ') {
                start++;
            }

            // Find the end of the word
            end = start;
            while (end < s.length() && s[end] != ' ') {
                end++;
            }

            // Extract the word
            if (start < end) {
                words.push_back(s.substr(start, end - start));
            }

            start = end;
        }

        string result;
        for (int i = words.size() - 1; i >= 0; --i) {
            result += words[i];
            if (i > 0) {
                result += " ";
            }
        }

        return result;
    }
};