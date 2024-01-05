class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n = s.length();
        unordered_set<char> hs;
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < n; right++) {
            if (hs.find(s[right]) == hs.end()) {
                hs.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
            } else {
                while (s[left] != s[right]) {
                    hs.erase(s[left]);
                    left++;
                }

                hs.erase(s[left]);
                left++;
                hs.insert(s[right]);
            }
        }

        return maxLen;
    }
};
