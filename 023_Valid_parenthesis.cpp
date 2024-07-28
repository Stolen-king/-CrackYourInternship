class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.length() % 2 != 0) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else if (ch == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    return false;
                }
            } else if (ch == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
            } else if (ch == '}') {
                if (!st.empty() && st.top() == '{') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};