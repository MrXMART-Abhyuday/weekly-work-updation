class Solution {
public:
    string removeDuplicateLetters(string s) {

        // Store the last occurrence of each character
        vector<int> last(26);
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        // Keeps track of whether a character is already in the stack
        vector<bool> visited(26, false);

        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            // If character is already in stack, skip it
            if (visited[s[i] - 'a'])
                continue;

            // Remove larger characters if they appear again later
            while (!st.empty() &&
                   st.top() > s[i] &&
                   last[st.top() - 'a'] > i) {

                visited[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(s[i]);
            visited[s[i] - 'a'] = true;
        }

        // Convert stack to string
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};