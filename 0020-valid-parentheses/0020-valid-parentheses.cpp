class Solution {
public:
    bool isValid(string s) {
        stack<char> check;

        for(int i = 0; i < s.size(); i++) {
            if(check.empty()) {
                check.push(s[i]);
            }
            else if(check.top() == '(' && s[i] == ')') {
                check.pop();
            }
            else if(check.top() == '{' && s[i] == '}') {
                check.pop();
            }
            else if(check.top() == '[' && s[i] == ']') {
                check.pop();
            }
            else {
                check.push(s[i]);
            }
        }

        return check.empty();
    }
};