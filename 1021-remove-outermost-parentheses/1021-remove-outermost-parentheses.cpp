class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int balance = 0; // Keeps track of balance between '(' and ')'
        
        for (char ch : s) {
            if (ch == '(') {
                if (balance > 0) {
                    result += ch;
                }
                balance++;
            } else if (ch == ')') {
                balance--;
                if (balance > 0) {
                    result += ch;
                }
            }
        }
        
        return result;
    }
};
