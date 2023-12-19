#include <iostream>
#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketStack;
        unordered_map<char, char> bracketPairs = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char ch : s) {
            if (bracketPairs.count(ch)) {
                // Current character is a closing bracket
                if (bracketStack.empty() || bracketStack.top() != bracketPairs[ch]) {
                    return false;  // Mismatched brackets
                }
                bracketStack.pop();
            } else {
                // Current character is an opening bracket
                bracketStack.push(ch);
            }
        }

        return bracketStack.empty();  // If the stack is empty, all brackets are matched
    }
};
