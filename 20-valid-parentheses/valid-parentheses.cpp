#include <iostream>
#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (!st.empty()) {
                    char topch = st.top();
                    if ((ch == ')' && topch == '(') || (ch == '}' && topch == '{') || (ch == ']' && topch == '[')) {
                        st.pop();
                    } else {
                        return false;  // Mismatched brackets
                    }
                } else {
                    return false;  // Closing bracket with no matching opening bracket
                }
            }
        }

        return st.empty();  // If the stack is empty, all brackets are matched
    }
};
